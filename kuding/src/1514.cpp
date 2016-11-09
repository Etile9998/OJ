#include <cstdio>

int main() {
	int n, tmp;
	int a = 0, b = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &tmp);
		if (tmp < 3) {
			a++;
		}
		else {
			b++;
		}
	}

	printf("%d\n", a);
	if (a >= b * 3) {
		puts("선희야 축하해");
	}
	else {
		double ans = n * 3 / 4.;
		if (ans != (int)ans)
			ans = (int)ans + 1;

		printf("최소 %d 표를 더 획득해야 합니다.\n", (int)ans - a);
		puts("선희야 넌 지금도 충분히 이뻐");
	}
	return 0;
}