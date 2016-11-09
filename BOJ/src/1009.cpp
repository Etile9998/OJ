#include <cstdio>

int main(){
	//freopen("input.txt", "r", stdin);
	int t, a, b, ans;

	scanf("%d", &t);
	for (int tc = 0; tc < t; tc++){
		ans = 1;
		scanf("%d%d", &a, &b);
		//a = (a % 10) ? a : 10; // 0 이면 10으로
		b = (b & 3) ? b : 4;

		while (b--)
			ans = ans*a % 10;

		if (!ans)ans = 10;

		printf("%d\n", ans);
	}
	return 0;
}

/*
1 = 1
2 = 2 4 8 6
3 = 3 9 7 1
4 = 4 6
5 = 5
6 = 6
7 = 7 9 3 1
8 = 8 4 2 6
9 = 9 1
0 = 0

*/