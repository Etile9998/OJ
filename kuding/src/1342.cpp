#include<cstdio>

#define MOD 1000000007
typedef long long i64;

i64 pow(i64 n, i64 k) {
	if (k == 0)
		return 1;
	if (k == 1)
		return n;
	i64 tmp = pow(n, k / 2) % MOD;
	if (k % 2)
		return tmp*tmp*n%MOD;
	else
		return tmp*tmp%MOD;
}
int main() {
	i64 n;
	scanf("%lld", &n);
	printf("%lld", pow(2, n - 1));
	return 0;
}