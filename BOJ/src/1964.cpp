#include <cstdio>

//5 12 22 
// 7 10 13
int main(){
	int n,ans = 1;
	scanf("%d", &n);
	do {
		ans += (3 * n + 1);
		ans %= 45678;
	} while (--n);
	printf("%d\n", ans);
	return 0;
}