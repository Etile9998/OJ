#include <cstdio>
#include <cmath>

int d[1001];

void prec() {
	int i, j, k;
	i = j = k = 1;
	while (k <= 1000) {
		for (i = 1; i <= j; i++) {
			d[k++] = j;
		}
		j++;
	}
}

int main() {
	int i = 1, j = 1, n, m, sum = 0;
	prec();
	scanf("%d%d", &n, &m);
	for (i = n; i <= m; i++)
		sum += d[i];
	printf("%d", sum);
	return 0;
}