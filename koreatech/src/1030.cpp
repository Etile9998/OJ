#include <iostream>
#include <vector>
using namespace std;
#define min(a,b) (a)<(b)?(a):(b)
int main() {
	int n,low=99999999,ans=0;
	cin >> n;
	vector<int> p(n);
	vector<int> d(n);
	for (int i = 0; i < n; i++){
		cin >> p[i];
		if (low > p[i]) {
			low = p[i];
		}
		d[i] = p[i] - low;
		if (ans < d[i])
			ans = d[i];
	}
	cout << ans;
	return 0;
}