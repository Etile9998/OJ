#include <cstdio>
#include <cstring>
#include <cmath>
int main() {
	long long ans = 0;
	long long ans2 = 0;
	char a[10], b[10], c[10];
	char color[11][10] = { "black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white" };

	scanf("%s%s%s", a, b, c);
	for (int i = 0; i <= 10; i++) {
		if (!strcmp(color[i], a))
			ans += i * 10;
		if (!strcmp(color[i], b))
			ans += i;
		if (!strcmp(color[i], c))
			ans2 += pow(10, i);
	}

	printf("%lld", ans*ans2);
	return 0;
}