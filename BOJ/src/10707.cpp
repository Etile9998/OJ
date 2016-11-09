#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
	int a, b, c, d, p;
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &p);
	printf("%d\n",min(a*p,c>p?b:b+d*(p-c)) );
	return 0;
}