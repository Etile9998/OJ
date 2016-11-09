#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int ans = 1, cur = 1;
		string s;
		cin >> s;
		for (int i = 1; s[i]; i++) {
			if (s[i - 1] == s[i]) {
				cur++;
				if (ans < cur)
					ans = cur;
			}
			else
				cur = 1;
		}
		cout << s.size()-ans << endl;
	}
	return 0;
}