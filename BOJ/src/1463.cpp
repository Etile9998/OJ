#include <cstdio>

#define min2(x,y) x<y?x:y

int d[1000001] = { 0, }
;
int main(){
	int x;
	scanf("%d", &x);
	d[1] = 0;
	for (int i = 2; i <= x; i++){
		d[i] = d[i - 1] + 1;
		if (0 == i % 2)
			d[i] = min2(d[i], d[i / 2] + 1);
		if (0 == i % 3)
			d[i] = min2(d[i], d[i / 3] + 1);
	}

	printf("%d\n",d[x]);
	return 0;
}