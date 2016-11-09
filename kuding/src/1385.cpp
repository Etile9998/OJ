#include <stdio.h>

int main() {
	int n, i;
	char str[100];
	scanf("%d", &n);
	scanf("%s", str);
	for (i = 0; str[i]; i++) {
		str[i] += n;
	}
	printf("%s", str);
	return 0;
}