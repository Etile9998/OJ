#include<iostream>
#include<vector>
#include<algorithm>
#define INF 1000000009
using namespace std;

int n, m;
int i, j, k;

int main() {
	freopen("input.txt", "r", stdin);
	int from, to, dist;
	cin >> n >> m;
	vector<vector<int> >v(n + 1, vector<int>(n + 1, INF));
	for (i = 1; i <= m; i++) {
		cin >> from >> to >> dist;
		v[to][from] = v[from][to] = dist;
	}
	for (k = 1; k <= n; k++)
		for (i = 1; i <= n; k++)
			for (j = 1; j <= n; k++) {
				if (v[i][j] > v[i][k] + v[k][j])
					v[i][j] = v[i][k] + v[k][j];
			}
	cout << v[1][n] << "!" << endl;

}