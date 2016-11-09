#include <cstdio>
#include <algorithm>
using namespace std;

int pos[1001]; // 도시 위치
int dp[1001][1001][2];

int proc() {

}

int main() {
	int n, l,i;
	scanf("%d %d", &n, &l);
	pos[0] = l;
	for (i = 1; i <= n; i++) {
		scanf("%d", &pos[i]);
	}
	sort(pos, pos + n + 1);
	for (i = 0; pos[i] != l; i++);
	printf("%d", proc());
}	