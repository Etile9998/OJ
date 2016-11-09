#include <cstdio>

int main() {
	int n, f;
	scanf("%d %d", &n, &f);
	n -= n % 100;
	while (n / f * f != n) {
		n++;
	}
	if (n % 100 < 10)
		printf("0");
	printf("%d", n % 100);
	return 0;
}