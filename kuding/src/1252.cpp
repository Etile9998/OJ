#include <cstdio>
#include <stack>
#include <algorithm>

using namespace std;
//1하 2우 3상 4좌

char m[102][102] = {}; // map
char m2[102][102] = {}; // map 2
char p[102][102] = {}; // pre
char p2[102][102] = {}; // pre 2
int c[102][102] = {}; // count
int c2[102][102] = {}; // count 2
int w, h;
int i, j;
int ans;
stack <char> s;

void proc() {
	//초기 1줄 세팅
	for (i = 2; i <= w; i++) {
		if (m[i][1] == '#')
			continue;
		if (m[i][1] == '*')
			c[i][1]++;

		m2[i][1] = '.';
		c[i][1] += c[i - 1][1];
		p[i][1] = '1';
	}

	for (j = 2; j <= h; j++) {
		if (m[1][j] == '#')
			continue;
		if (m[1][j] == '*')
			c[1][j]++;

		m2[1][j] = '.';
		c[1][j] += c[1][j - 1];
		p[1][j] = '2';
	}

	//우선 도착지까지 계산
	for (i = 2; i <= w; i++)
		for (j = 2; j <= h; j++) {
			if (m[i][j] == '#')
				continue;
			if (m[i][j] == '*')
				c[i][j]++;

			m2[i][j] = '.';
			if (c[i - 1][j] >= c[i][j - 1]) {
				c[i][j] += c[i - 1][j];
				p[i][j] = '1';
			}
			else {
				c[i][j] += c[i][j - 1];
				p[i][j] = '2';
			}
		}

	ans += c[i][j];
	////////////////////////////////////////////////////////////
	//초기 1줄 세팅
	for (i = 2; i <= w; i++) {
		if (m2[i][1] == '#')
			continue;
		if (m2[i][1] == '*')
			c2[i][1]++;

		m2[i][1] = '.';
		c2[i][1] += c2[i - 1][1];
		p2[i][1] = '3';
	}

	for (j = 2; j <= h; j++) {
		if (m2[1][j] == '#')
			continue;
		if (m2[1][j] == '*')
			c2[1][j]++;

	//	m2[1][j] = '.';
		c2[1][j] += c2[1][j - 1];
		p2[1][j] = '4';
	}

	//우선 도착지까지 계산
	for (i = 2; i <= w; i++)
		for (j = 2; j <= h; j++) {
			if (m2[i][j] == '#')
				continue;
			if (m2[i][j] == '*')
				c2[i][j]++;

	//		m2[i][j] = '.';
			if (c2[i - 1][j] > c2[i][j - 1]) {
				c2[i][j] += c2[i - 1][j];
				p2[i][j] = '3';
			}
			else {
				c2[i][j] += c2[i][j - 1];
				p2[i][j] = '4';
			}
		}
	ans += c2[i][j];

	i = w;
	j = h;
	while (i != 1 || j != 1) {
		s.push(p2[i][j]);
		if (p2[i][j] == '3')
			i--;
		else
			j--;
	}
	i = w;
	j = h;
	while (i != 1 || j != 1) {
		s.push(p[i][j]);
		if (p[i][j] == '1')
			i--;
		else
			j--;
	}

	printf("%d\n", ans);
	while (!s.empty()) {
		printf("%c ", s.top());
		s.pop();
	}
}

int main() {

	freopen("in.txt", "r", stdin);
	scanf("%d%d", &w, &h);
	for (i = 1; i <= w; i++)
		for (j = 1; j <= h; j++) {
			scanf("%c ", &m[i][j]);
			m2[w - i + 1][h - j + 1] = m[i][j];
		}

	proc();

	return 0;
}