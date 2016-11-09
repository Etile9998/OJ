#include <cstdio>

int main(){
	int n, i, j, k;
	scanf("%d", &n);

	for (k = 1; k <= n; k++){
		for (i = n - k; i > 0; i--)
			printf(" ");
		for(j = 1; j < 2 * k; j++){
			printf("*");
		}
		puts("");

	}
	//printf("%d %d %d", i, j, k);
	
	for (k -= 2; k > 0; k--){
		for (i = n - k; i > 0; i--)
			printf(" ");
		for (j = 1; j < 2 * k; j++){
			printf("*");
		}
		puts("");

	}
	return 0;
}