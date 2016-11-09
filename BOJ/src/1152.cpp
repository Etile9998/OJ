#include <cstdio>

char str[1000001];
int main() {
	//freopen("test.in", "r", stdin);
	int cnt = 0;

	for (; ~scanf("%s", str);)cnt++;

	printf("%d", cnt);
}