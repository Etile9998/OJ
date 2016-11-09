#include <cstdio>
#include <cstring>

char str[333335];
int main() {
	char a[8][4] = { "000","001" ,"010" ,"011" ,"100" ,"101" ,"110" ,"111" };
	char b[8][4] = { "0","1","10","11","100" ,"101" ,"110" ,"111" };
	scanf("%s", str);

	printf("%s", b[str[0] - '0']);
	for (size_t i = 1; str[i]; i++)
	{
		printf("%s", a[str[i] - '0']);
	}
	return 0;
}