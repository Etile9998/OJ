#include <cstdio>

int main() {
	int n, i, j, k;
	scanf("%d", &n);
	for (k = 0; k < 2 * n - 1; k++) {
		if (k < n) {
			for (i = n - 1; i > k; i--)
				printf(" ");
			while (i-- >= 0)
				printf("*");
			puts("");
		}
		else {
			for(i = n;i<=k;i++)
				printf(" ");
			while (i++ < 2*n)
				printf("*");
			puts("");
		}
	}
}