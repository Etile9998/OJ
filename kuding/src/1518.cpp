#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, t, ans = 0;
	cin >> n;
	vector<int>v(n + n + 2);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			cin >> t;
			if (t) {
				v[i + 2]++;
				v[j + n + 2]++;
				if (i == j)
					v[0]++;
				else if (i + j + 1 == n)
					v[1]++;
			}
		}
	for (int i = 0; i < (2 * n + 2); i++)
		if (v[i] == n)
			ans++;

	cout << ans;
	return 0;
}