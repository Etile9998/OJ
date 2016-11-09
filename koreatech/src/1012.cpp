#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		vector<int> v(n);
		for (int i = 0; i < n; i++)
			cin >> v[i];
		sort(v.begin(), v.end());
		for (int i = 0; i < n; i++) {
			cout << v[i];
			if (i < n - 1)
				cout << " ";
		}
		cout << endl;
	}
	return 0;
}