#include <cstdio>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;
int main(){
	int n, ans = 0;
	scanf("%d", &n);
	vector<int>a(n), b(n);

	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (int i = 0; i < n; i++)
		scanf("%d", &b[i]);

	sort(a.begin(), a.end());
	sort(b.begin(), b.end(), greater<int>());

	for (int i = 0; i < n; i++)
		ans += a[i] * b[i];
	printf("%d\n", ans);
	return 0;
}