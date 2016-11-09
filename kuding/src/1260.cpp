#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n, a[501][501];

int kadane(vector<int> v) {
	int max = -88888, cur = 0;

	for (int i = 1; i <= n; i++) {
		cur += v[i];
		if (cur < 0) {
			cur = 0;
		}
		if (max < cur)
			max = cur;
	}
	return max;
}

int main() {
	//freopen("input.txt", "r", stdin);
	int i, j, ans = 0, tmp;
	cin >> n;
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			cin >> a[i][j];

	for (int left = 1; left <= n; left++) {
		vector<int>v(n+1);
		for (int right = left; right <= n; right++) {
			for (i=1;i<=n;i++) {
				v[i] += a[i][right];
			}
			tmp = kadane(v);
			if (ans < tmp) {
				ans = tmp;
			}
		}
	}
	cout << ans;

	return 0;
}