#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, k, tmp,i,ans=0;
	cin >> n >> k;
	vector<bool> v(n + 1);
	while (k--) {
		cin >> tmp;
		for (i = tmp; i <= n; i += tmp){
			if (v[i])
				continue;
			v[i] = 1;
			ans++;
		}
	}
	cout << ans;
}