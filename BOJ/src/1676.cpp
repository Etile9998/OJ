#include <cstdio>

#define min(x,y) (x<y?x:y)
int main() {
	int ans ,two,five,n;
	ans = two = five = 0;
	scanf("%d", &n);
	if (n) {
		for (int i = 1; i <= n; i++) {
			int tmp = i;
			while (tmp % 2 == 0) {
				tmp /= 2;
				two++;
			}
			while (tmp % 5 == 0) {
				tmp /= 5;
				five++;
			}
		}
		ans = min(two, five);
		printf("%d", ans);
	}
	else
		printf("0");
	return 0;
}