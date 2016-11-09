#include <cstdio>

int main() {
	int n,ans=0,tmp;
	scanf("%d", &n);
	for (int i = 0; i < 5; i++){
		scanf("%d", &tmp);
		if (n == tmp)ans++;
	}
	printf("%d", ans);
	return 0;
}