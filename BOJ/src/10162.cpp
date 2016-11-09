#include <cstdio>

int main(){
	int t, a, b, c;
	a = b = c = 0;
	scanf("%d", &t);

	while (t >= 300){
		a++;
		t -= 300;
	}
	while (t >= 60){
		b++;
		t -= 60;
	}
	while (t >= 10){
		c++;
		t -= 10;
	}

	if (t){
		printf("-1\n");
	}
	else{
		printf("%d %d %d\n", a, b, c);
	}
	return 0;
}