#include <cstdio>

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++){
		for (int j = 0; j < i; j++)
			printf("*");
		puts("");
	}
	for (int i = n - 1; i > 0; i--) {
		for (int j = 0; j < i; j++)
			printf("*");
		puts("");
	}
	return 0;
}