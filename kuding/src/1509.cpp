	#include <cstdio>
	#define abs(x) ((x)<0?(-x):(x))
	int main() {
		int h, m;
		double ans;
		scanf("%d %d", &h, &m);
		ans = 30 * h - 5.5*m;
		ans = abs(ans);
		if (ans > 180)
			ans = 360 - ans;
		printf("%g", ans);
	}