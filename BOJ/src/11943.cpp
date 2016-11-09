#include <cstdio>
#include <algorithm>
int main(){
	int a, b, c, d;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	printf("%d\n", std::min(a + d, c + b));
	return 0;
}