#include <cstdio>
#include <cctype>
#include <cstring>
#include <algorithm>
using namespace std;
int main() {
	int i;
	char str[100];
	char delim[] = " ";
	char *tok;
	fgets(str, sizeof(str), stdin);
	for (int i = 0; str[i]; i++)
		if (islower(str[i]))
			str[i] = toupper(str[i]);
	tok = strtok(str, delim);
	while (tok != NULL) {
		int len = strlen(tok);
		int cnt = 0;
		while ((tok[len - 1] == '!' || tok[len - 1] == '.') && len > 0)
			len--;
		if (len)
			reverse(tok, tok + len);
		printf("%s ", tok);
		tok = strtok(NULL, delim);
	}
	return 0;
}