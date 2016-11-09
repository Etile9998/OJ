#include <cstdio>

int main() {

	int t, a, b;

	scanf("%d", &t);
	for (int tc = 1; tc <= t; tc++) {
		scanf("%d%d", &a, &b);
		printf("Case #%d: %d + %d = %d\n", tc, a, b, a + b);
	}
	return 0;
}