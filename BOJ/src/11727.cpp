#include <cstdio>

int d[1001];
int n,i;

int main() {
	scanf("%d", &n);
	d[1] = 1;
	d[2] = 3;
	for (i = 3; i <= n; i++) {
		d[i] = (d[i - 1] + 2 * d[i - 2]) % 10007;
	}
	printf("%d", d[n]);
	return 0;
}