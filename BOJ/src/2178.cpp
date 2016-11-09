#include <cstdio>
#include <algorithm>
#include <queue>

using namespace std;

bool map[102][102];
int d[102][102];
int n, m;

struct POINT {
	int x, y, dist;
};

int main() {
	int i, j;
	scanf("%d%d", &n, &m);
	queue<POINT> q;

	for (i = 1; i <= n; i++)
		for (j = 1; j <= m; j++)
			scanf("%1d", &map[i][j]);

	POINT pt = { 1,1,1 };
	q.push(pt);
	while (!q.empty()) {
		POINT tmp = q.front();
		q.pop();

		d[tmp.x][tmp.y] = tmp.dist++;
		if (map[tmp.x + 1][tmp.y] && !d[tmp.x + 1][tmp.y]) {
			POINT tmp2 = tmp;
			tmp2.x++;
			q.push(tmp2);
			d[tmp.x + 1][tmp.y] = 1;
		}
		if (map[tmp.x][tmp.y + 1] && !d[tmp.x][tmp.y + 1]) {
			POINT tmp2 = tmp;
			tmp2.y++;
			q.push(tmp2);
			d[tmp.x][tmp.y + 1] = 1;
		}
		if (map[tmp.x - 1][tmp.y] && !d[tmp.x - 1][tmp.y]) {
			POINT tmp2 = tmp;
			tmp2.x--;
			q.push(tmp2);
			d[tmp.x - 1][tmp.y] = 1;
		}
		if (map[tmp.x][tmp.y - 1] && !d[tmp.x][tmp.y - 1]) {
			POINT tmp2 = tmp;
			tmp2.y--;
			q.push(tmp2);
			d[tmp.x][tmp.y - 1] = 1;
		}
	}

	printf("%d", d[n][m]);
	return 0;
}