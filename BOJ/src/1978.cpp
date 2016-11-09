#include <cstdio>
#include <vector>
using namespace std;

int main(){
	vector<bool> b(1001, 1);

	b[0] = b[1] = 0;

	for (int i = 2; i*i <= 1000; i++)
		for (int j = i*i; j <= 1000; j += i)
			b[j] = 0;

	int n, tmp,ans = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		scanf("%d",&tmp);
		if (b[tmp])ans++;
	}
	printf("%d\n", ans);
}