#include <iostream>
using namespace std;

int main() {
	int t,n,tmp;
	cin >> t;
	while (t--) {
		int ans = 0;
		cin >> n;
		while (n--) {
			cin >> tmp;
			ans ^= tmp;
		}
		cout << ans<<endl;
	}
	return 0;
}