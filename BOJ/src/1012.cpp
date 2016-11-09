#include <cstdio>
#include <vector>

using namespace std;

int t, m, n, k, x, y, ans;

void d(int row, int col, vector<vector<int> > &v) {
	if (row < 0 || col < 0 || row >= m || col >= n)return;

	if (v[row][col] == 0) return; // 이미 꺼져있다 = 리턴
	
	v[row][col] = 0; // 뽑는다
	d(row + 1, col, v);
	d(row - 1, col, v);
	d(row, col + 1, v);
	d(row, col - 1, v);
}
int main() {


	scanf("%d", &t);
	while (t--) {
		ans = 0;
		scanf("%d%d%d", &m, &n, &k);
		vector<vector<int> >v(m, vector<int>(n));
		while (k--) {
			scanf("%d%d", &x, &y);
			v[x][y] = 1;
		}

		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++) {
				if (v[i][j]) {
					d(i, j, v);
					ans++;
				}
			}
		printf("%d\n", ans);
	}
	return 0;
}