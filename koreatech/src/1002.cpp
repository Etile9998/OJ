#include <cstdio>

int main() {
	int n;
	char s[11];
	scanf("%d", &n);
	while (n--) {
		scanf("%s", s);
		printf("%c%c\n", s[2], s[3]);
	}
	return 0;
}