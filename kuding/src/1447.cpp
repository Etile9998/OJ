#include <cstdio>

int f(int a) {

}

void g(int &a, int &b)  // reference를 이용한 전달
{
	int t;
	t = a;
	a = b;
	b = t;
}

int get_max(int a, int b)
{
	return a > b ? a : b;
}

int main()
{
	int a, b, ans = 0;
	scanf("%d%d", &a, &b);
	if (a > b)
		g(a, b);
	for (int i = a; i <= b; i++)
		ans = get_max(ans, f(i));
	printf("%d", ans);
	return 0;
}