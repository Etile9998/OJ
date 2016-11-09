#include <cstdio>
#include <vector>
#define max2(x,y) (x)>=(y)?(x):(y)
typedef long long ll;

using namespace std;
int main(){
	int n;
	scanf("%d", &n);
	vector<int> v(n);

	for (int i = 0; i < n; i++)
		scanf("%d", &v[i]);

	ll max;
	max = v[0];

	for (int i = 1; i < n; i++){
		if (v[i - 1] > 0)
			v[i] = v[i - 1] + v[i];
		max = max2(max, v[i]);
	}

	printf("%lld\n", max);

	return 0;
}