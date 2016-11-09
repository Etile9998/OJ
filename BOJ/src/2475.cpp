#include <cstdio>

int main(){
	int tmp, ans = 0;

	for (int i = 0; i < 5; i++){
		scanf("%d", &tmp);
		ans += tmp*tmp;
	}
	printf("%d\n", ans % 10);

	return 0;
}