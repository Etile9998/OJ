#include <cstdio>

int main() {
	int e, s, m, ans = 1;
	int arr[3] = { 1,1,1 };
	scanf("%d%d%d", &e, &s, &m);

	while (e != arr[0] || s != arr[1] || m != arr[2]) {
		arr[0]++;
		arr[1]++;
		arr[2]++;
		if (arr[0] == 16)
			arr[0] = 1;
		if (arr[1] == 29)
			arr[1] = 1;
		if (arr[2] == 20)
			arr[2] = 1;
		ans++;
	}

	printf("%d", ans);

	return 0;
}