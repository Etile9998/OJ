#include <cstdio>

int main() {
	int t, max = 0, tmp;
	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		scanf("%d", &tmp);
		max += tmp;
	}
	printf("%d", max - t + 1);
	return 0;
}