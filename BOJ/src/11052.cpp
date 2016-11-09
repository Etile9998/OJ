#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
	int n, m;
	scanf("%d", &n);
	vector<int> p(n + 1), d(n + 1);
	for (size_t i = 1; i <= n; i++){
		scanf("%d", &p[i]);
		d[i] = p[i];
	}
	for (size_t i = 1; i <= n; i++){
		for (size_t j = 1; 2*j <= i; j++)
			d[i] = max(d[i], d[j]+d[i-j]);
	}

	printf("%d\n", d[n]);
	return 0;
}