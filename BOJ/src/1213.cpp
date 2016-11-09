#include <cstdio>
#include <stack>
#include <queue>
#include <cstring>
using namespace std;

int c[26];
char a[51];
int main() {
	bool flag = 1, center = 0;
	char cen;
	queue<char> q;
	stack<char> s;
	scanf("%s", a);
	int len = strlen(a);
	for (int i = 0; a[i]; i++)
		c[a[i] - 'A']++;

	for (int i = 0; i < 26; i++) {
		char ch = i + 'A';
		if (c[i] % 2) {
			if(center){
			flag = 0;
			break;
			}
			else {
				cen = ch;
				center = 1;
				c[i]--;
			}
		}
		while (c[i]) {
			q.push(ch);
			s.push(ch);
			c[i] -= 2;
		}
	}

	if (center)
		q.push(cen);
	if (flag) { // 가능한 경우
		while (!q.empty()) {
			printf("%c", q.front());
			q.pop();
		}
		while (!s.empty()) {
			printf("%c", s.top());
			s.pop();
		}
	}
	else
		printf("I'm Sorry Hansoo");

	return 0;
}