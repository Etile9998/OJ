#include <cstdio>

void swap(int &a, int &b) {
	int t = a;
	a = b;
	b = t;
}
int main() {
	int a[3],cnt =0;
	for (int i = 0; i < 3; i++)
		scanf("%d", &a[i]);
	if (a[0] > a[1])swap(a[0], a[1]);
	if (a[0] > a[2])swap(a[0], a[2]);
	if (a[1] > a[2])swap(a[1], a[2]);

	if (a[0] == a[1]) cnt++;
	if (a[0] == a[2]) cnt++;
	if (a[1] == a[2]) cnt++;

	if (cnt > 2)
		printf("%d", 10000 + a[0] * 1000);
	else if (cnt)
		printf("%d", 1000 + a[1] * 100);
	else
		printf("%d", a[2] * 100);
	return 0;
}