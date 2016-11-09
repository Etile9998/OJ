#include <cstdio>

int main(){
	int tmp, sum = 0;
	for (int i = 0; i < 5; i++){
		scanf("%d", &tmp);
		if (tmp < 40)
			sum += 40;
		else
			sum += tmp;
	}

	printf("%d\n", sum / 5);

}