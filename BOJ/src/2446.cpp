#include <cstdio>


int main() {
	int n, i, j, k,star=3;
	scanf("%d", &n);

	for (k = 0; k < 2 * n - 1; k++) {
		if (k < n) {
			for (i = 0; i < k; i++)
				printf(" ");
			for (i = 2 * n - 1; i > 2 * k; i--)
				printf("*");
			puts("");
		}
		else {
			for (i = 2 * n - 2; i > k; i--)
				printf(" ");
			for (i = 0;i<star;i++)
				printf("*");
			puts("");
			star += 2;
		}
	}
	return 0;
}