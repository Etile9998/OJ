#include <cstdio>

int main() {
	char d[6] = "DCBAE";
	int tmp,sum = 0;
	int i = 3,j;

	while (i--) {
		sum = 0;
		j = 4;
		while (j--){
			scanf("%d", &tmp);
			sum += tmp;
		}
		printf("%c\n", d[sum]);
	}


	return 0;
}