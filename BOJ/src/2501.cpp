#include <cstdio>

int main() {
	int n, k,cnt = 0;
	scanf("%d%d", &n, &k);
	for (int i = 1; cnt <= k; i++) {
		if (i>n+1) {
			printf("0");
			break;
		}
		if (cnt == k){
			printf("%d", i-1);
			break;
		}
		if (n%i == 0)
			cnt++;
	}
}