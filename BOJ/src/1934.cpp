#include <cstdio>

int gcd(int x, int y) {
	return y ? gcd(y, x%y) : x;
}
int main() {
	int t, a, b;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d%d", &a, &b);
		printf("%d\n", a*b / gcd(a, b));
	}
	return 0;
}