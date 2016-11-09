#include <cstdio>
#include <algorithm>
using namespace std;
#define min2(x,y) x<y?x:y
int main(){
	int d[1000][3];
	int n,ans;
	scanf("%d", &n);

	scanf("%d%d%d", &d[0][0], &d[0][1], &d[0][2]);
	for (int i = 1; i < n; i++){
		scanf("%d%d%d", &d[i][0], &d[i][1], &d[i][2]);
		d[i][0] += min(d[i - 1][1], d[i - 1][2]);
		d[i][1] += min(d[i - 1][0], d[i - 1][2]);
		d[i][2] += min(d[i - 1][0], d[i - 1][1]);
	}
	ans = min(d[n - 1][0], d[n - 1][1]);
	ans = min(ans, d[n - 1][2]);
	printf("%d\n",ans);

	return 0;
}