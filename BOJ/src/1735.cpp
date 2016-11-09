#include <cstdio>

int gcd(int x, int y) {
	return y ? gcd(y, x%y) : x;
}
int main() {
	int a, b, c, d, g;
	int mom, son;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	mom = b*d;
	son = a*d + b*c;
	g = gcd(mom, son);
	printf("%d %d", son / g, mom / g);
	return 0;
}