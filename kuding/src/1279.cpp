#include <cstdio>
#include <cstring>
char s[30001];
int i, j, len;
int main() {
	scanf("%s", s);
	len = strlen(s);
	for (i = 0; s[i]; i++) {
		if (s[i] == 'A' || s[i] == 'B') {
			for (j = len + 1; j > i; j--) {
				s[j + 2] = s[j];
			}
			s[i] = 'A';
			s[i + 1] = '.';
			s[i + 2] = 'B';
			i += 2;
			len += 2;
		}

	}
	printf("%s", s);
	return 0;
}