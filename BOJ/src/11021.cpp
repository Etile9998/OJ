#include <cstdio>

int main() {
	int t,a,b,cnt = 1;

	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &a, &b);
		printf("Case #%d: %d\n",cnt++,a+b);
	}
	return 0;
}