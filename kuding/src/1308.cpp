#include <iostream>
#include <vector>
#include <algorithm>
#define INF 1000000009
using namespace std;
int main() {
	int n, m, h, w, ans = 0;
	cin >> n >> m >> h >> w;
	vector<vector<int> >v(n, vector<int>(m));
	vector<vector<pair<int, int> > >d(n + h, vector<pair<int, int> >(m + w, make_pair<int, int>(INF, -INF)));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			cin >> v[i][j];
			for (int k = i; k < i + h; k++)
				for (int l = j; l < j + w; l++) {
					d[k][l].first = min(d[k][l].first, v[i][j]);
					d[k][l].second = max(d[k][l].second, v[i][j]);
				}
		}

	for (int i = h - 1; i < n; i++)
		for (int j = w - 1; j < m; j++)
			if (ans < d[i][j].second - d[i][j].first)
				ans = d[i][j].second - d[i][j].first;

	cout << ans;
}