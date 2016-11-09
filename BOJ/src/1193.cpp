#include <cstdio>

int main() {
	int x, sum = 0, k = 1;
	scanf("%d", &x);

	while (x > sum) {
		sum += k++;
	}

	if (k % 2)
		printf("%d/%d", k - (sum - x + 1), (sum - x + 1));
	else
		printf("%d/%d", (sum - x + 1), k - (sum - x + 1));
	return 0;
}