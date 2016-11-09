#include <cstdio>

#define inf 10007
int main(){
	int n, ans,d[1001] = { 1, 1, 2 };
	scanf("%d", &n);
	if (d[n])ans = d[n];
	else{
		for (int i = 3; i <= n; i++)
			d[i] = (d[i - 1] + d[i - 2]) % inf;
		ans = d[n];
	}
	printf("%d\n", ans);
}