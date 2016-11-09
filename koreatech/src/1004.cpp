#include <cstdio>

int rev(int a) {
	int ret = 0;

	while (a) {
		ret *= 10;
		ret += a % 10;
		a /= 10;
	}
	return ret;
}

int main() {
	int t, n;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		int tmp = rev(n);
		printf("%s\n", tmp+n == rev(tmp+n) ? "yes" : "no");
	}
	return 0;
}