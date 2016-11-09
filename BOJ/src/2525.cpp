#include <cstdio>

int main(){
	int a, b,c;
	scanf("%d%d%d", &a, &b, &c);
	b += c;
	while (b > 59){
		a++;
		b -= 60;
	}
	while (a > 23){
		a -= 24;
	}

	printf("%d %d\n", a, b);

}