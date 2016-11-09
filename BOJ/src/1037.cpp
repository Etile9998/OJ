#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

int main() {
	int T;
	ll ans = 1;
	scanf("%d", &T);
	vector<ll> v(T);
	for (int i = 0; i < T; i++) {
		scanf("%lld", &v[i]);
	}
	sort(v.begin(), v.end());

	printf("%lld", v[0] * v[T-1]);
	return 0;
}