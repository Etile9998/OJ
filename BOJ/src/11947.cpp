#include <cstdio>

int main(){
	int t, zarisu;
	long long ans, n, check;
	scanf("%d", &t);
	for (int tc = 0; tc < t; tc++){
		zarisu = 1;
		check = 10;
		scanf("%lld", &n);
		while (n / check){
			zarisu++;
			check *= 10;
		}
		if (n < check / 2){
			ans = n*((check - 1) - n);
		}
		else{
			ans = check / 2 * (check / 2 - 1);
		}
		printf("%lld\n", ans);
	}
	return 0;
}