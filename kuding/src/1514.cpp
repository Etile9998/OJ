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
		puts("����� ������");
	}
	else {
		double ans = n * 3 / 4.;
		if (ans != (int)ans)
			ans = (int)ans + 1;

		printf("�ּ� %d ǥ�� �� ȹ���ؾ� �մϴ�.\n", (int)ans - a);
		puts("����� �� ���ݵ� ����� �̻�");
	}
	return 0;
}