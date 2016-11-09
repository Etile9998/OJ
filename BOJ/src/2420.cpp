#include <cstdio>

typedef long long ll;

ll abs(ll x, ll y) {
	return x > y ? x - y : y - x;
}
int main() {
	ll n, m;
	scanf("%lld%lld", &n, &m);
	printf("%lld", abs(n, m));

}