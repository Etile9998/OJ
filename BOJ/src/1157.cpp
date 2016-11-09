#include <cstdio>

char str[1000001];
int ans[26];
int i, j;
int main() {
	int max1=0, max2=0;
	scanf("%s", str);
	for ( i = 0; str[i]; i++) {
		if (str[i] > 90)
			ans[str[i] - 'a']++;
		else
			ans[str[i] - 'A']++;
	}

	for (i = 0; i < 26; i++) {
		if (ans[max1] < ans[i])
			max1 = i;
		if (ans[max2] <= ans[i])
			max2 = i;
	}
	if (max1 == max2)
		printf("%c", 'A' + max1);
	else
		printf("?");
	return 0;
}