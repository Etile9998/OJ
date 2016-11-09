#include <cstdio>
#include <cstring>
int main() {
	int n;
	scanf("%d", &n);
	char str[50][51] = {};
	scanf("%s", str[0]);

	for (int i = 1; i < n; i++) {
		scanf("%s", str[i]);
		for (int j = 0; j < strlen(str[0]); j++)
			if (str[i][j] != str[0][j])
				str[0][j] = '?';
	}

	printf("%s", str[0]);
	return 0;
}