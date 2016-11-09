#include <cstdio>

int n;
int a[1000];
int d[1000];
int main() {
	int i, j,ans;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);

	for (i = 0; i < n; i++) {
		d[i] = 1;
		for (j = 0; j < i; j++)
			if (a[j] < a[i] && d[i] < d[j] + 1)
				d[i] = d[j] + 1;
	}

	ans = d[0];
	for (i = 1; i < n; i++)
		if (ans < d[i])
			ans = d[i];
	printf("%d", ans);
	return 0;
}