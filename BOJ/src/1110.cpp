#include <cstdio>

int main(){
	int n, n1, n2, n3 = -1, ans = 0;

	scanf("%d", &n);
	n3 = n;

	do {
		ans++;

		n1 = n3 / 10;
		n2 = n3 % 10;
		n3 = n1 + n2;
		n3 = (n2 * 10) + (n3 % 10);
	} while (n != n3);

	printf("%d\n", ans);
	return 0;
}