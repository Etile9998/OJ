#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
	double ans = 0;
	int n, max;
	int a[1000];

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	sort(a, a + n);

	for (int i = 0; i < n; i++) {
		ans += 1. * a[i] / a[n - 1] * 100;
	}
	printf("%.2lf", ans / n);
	return 0;
}