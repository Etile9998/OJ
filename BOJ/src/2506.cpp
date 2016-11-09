#include <cstdio>

int main() {
	int n, sum = 0;
	int s[101] = {};

	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &s[i]);
		if (s[i])
			s[i] += s[i - 1];
		sum += s[i];
	}
	printf("%d", sum);
	return 0;
}