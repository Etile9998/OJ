#include <cstdio>

int main() {
	int n, k, i, j;
	scanf("%d%d", &n, &k);
	int a[101] = {}, b[10001] = { 1, };
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	for (i = 0; i < n; i++)
		for (j = a[i]; j <= k; j++) {
			b[j] += b[j - a[i]];
		}
	printf("%d", b[k]);

	return 0;
}