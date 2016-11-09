#include <cstdio>

int main() {
	char str[101];
	scanf("%s", str);
	int ans[26] = {};
	for (int i = 0; str[i]; i++)
		ans[str[i]-'a']++;
	for (int i = 0; i < 26; i++)
		printf("%d ", ans[i]);
	return 0;
}