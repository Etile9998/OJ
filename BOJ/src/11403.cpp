#include <cstdio>

int a[100][100];
int n;
int main() {
	int i, j, k;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			scanf("%d", &a[i][j]);

	for (k = 0; k < n; k++)
		for (i = 0; i < n; i++)
			for (j = 0; j < n; j++)
				if (a[i][k] && a[k][j])
					a[i][j] = a[i][k] + a[k][j];

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			printf("%d ", a[i][j] ? 1 : 0);
		printf("\n");
	}
	return 0;
}