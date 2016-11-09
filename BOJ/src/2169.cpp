#include <cstdio>
#include <algorithm>
#include <vector>
#define INF 100000009
using namespace std;
int main(){
	//freopen("input.txt", "r", stdin);
	int n, m;
	scanf("%d%d", &n, &m);
	vector<vector<int> >v(n + 1, vector<int>(m + 2, -INF));
	vector<vector<int> >d1(n + 1, vector<int>(m + 2, -INF));
	vector<vector<int> >d2(n + 1, vector<int>(m + 2, -INF));
	vector<vector<int> >ans(n + 1, vector<int>(m + 2, -INF));

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++){
			scanf("%d", &v[i][j]);
		}
	//algorithm part
	//첫줄
	ans[1][1] = v[1][1];
	for (int j = 2; j <= m; j++){
		ans[1][j] = v[1][j] + ans[1][j - 1];
	}

	for (int i = 2; i <= n; i++){
		// ↘방향
		for (int j = 1; j <= m; j++){
			d1[i][j] = v[i][j] + max(d1[i][j - 1], ans[i - 1][j]);
		}
		// ↙방향
		for (int j = m; j >= 1; j--){
			d2[i][j] = v[i][j] + max(d2[i][j + 1], ans[i - 1][j]);
		}
		// 큰 것
		for (int j = 1; j <= m; j++)
			ans[i][j] = max(d1[i][j], d2[i][j]);
	}
	//output
	printf("%d\n", ans[n][m]);
	return 0;
}