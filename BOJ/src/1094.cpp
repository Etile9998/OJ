#include <cstdio>

int main() {
	int x, i = 64,ans = 0;
	scanf("%d", &x);
	while (x) {
		if (x >= i) {
			x -= i;
			ans++;
		}
		i /= 2;
	}
	printf("%d", ans);
	return 0;
}