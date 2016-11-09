#include <cstdio>
#define min(a,b) ((a)<(b)?(a):(b))
#define BIG 999999
//using namespace std;

int n, k, i, j;
int dp[10001];
int coin[100];

void init() {
	for (i = 1; i <= 10000; i++)
		dp[i] = BIG;
}

void input() {
	scanf("%d %d", &n, &k);
	for (i = 0; i < n; i++) {
		scanf("%d", &coin[i]);
	}
}

void solve() {
	for (i = 0; i < n; i++) {
		for (j = coin[i]; j <= k; j++) {
			dp[j] = min(dp[j], dp[j - coin[i]] + 1);
		}
	}
}

void output() {
	printf("%d", dp[k] == BIG ? -1 : dp[k]);
}

int main() {
	init();
	input();
	solve();
	output();
	return 0;
}