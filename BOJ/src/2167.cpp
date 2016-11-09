#include <cstdio>

int main() {
	//freopen("test.in", "r", stdin);
	int a[301][301] = {};
	int n, m, tmp, k;
	scanf("%d%d", &n, &m);

	for (int row = 1; row <= n; row++)
		for (int col = 1; col <= m; col++) {
			scanf("%d", &a[row][col]);
			a[row][col] = a[row][col] - a[row - 1][col - 1] + a[row - 1][col] + a[row][col - 1];
		}

	scanf("%d", &k);
	for (int kc = 0; kc < k; kc++) {
		int i, j, x, y;
		scanf("%d%d%d%d", &i, &j, &x, &y);
		printf("%d\n", a[x][y] - a[i - 1][y] - a[x][j - 1] + a[i - 1][j - 1]);
	}

	return 0;
}