#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int proc(vector<int> v, int sum, int n) {
	vector<vector<int> > dp(sum + 1, vector<int>(n + 1));

	for (int i = 0; i < n; i++) {
		dp[0][i] = 1;
	}

	for (int i = 1; 1 <= sum; i++)
		for (int j = 1; j <= n; j++) {
			dp[i][j] += dp[i][j] + dp[i - v[j - 1]][j - 1];
		}
	return dp[sum][n];
}

int main() {
	int n, s, i;
	scanf("%d %d", &n, &s);	
	vector<int> v(n);
	for (i = 0; i < n; i++) {
		scanf("%d", &v[i]);
	}
	printf("%d\n", proc(v, s, n));
}