#include <cstdio>

int main(){
	int max,cur,a,b;
	max = cur = 0;

	for (int i = 0; i < 4; i++){
		scanf("%d%d", &a, &b);
		cur = cur + b - a;
		if (max < cur)
			max = cur;
	}

	printf("%d\n", max);

}