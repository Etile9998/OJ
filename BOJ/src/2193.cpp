#include <cstdio>

int main(){
	long long a[90] = { 1, 1, 2,};
	int n,i=3;
	scanf("%d", &n);
	while (!a[n-1]){
		a[i] = a[i - 2] + a[i - 1];
		i++;
	}

	printf("%lld\n", a[n - 1]);

	return 0;
}