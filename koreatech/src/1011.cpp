#include <iostream>
#include <vector>
using namespace std;

int min3(int a, int b, int c) {
	if (a > b)
		a = b;
	if (a > c)
		a = c;
	return a;
}

int main() {
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		vector<int> v(n + 1);
		for (int i = 0; i < n; i++)
			cin >> v[i];
		if (n < 3) {
			cout << 0 << endl;
			continue;
		}
		for (int i = 3; i <= n; i++)
			v[i] += min3(v[i - 1], v[i - 2], v[i - 3]);
		cout << v[n] << endl;
	}
	return 0;
}