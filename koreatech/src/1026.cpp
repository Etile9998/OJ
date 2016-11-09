#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main() {
	string str;
	int t, tmp;
	cin >> t;
	while (t--) {
		deque<char>d;
		cin >> str;
		for (int i = 0; str[i]; i++) {
			if (d.empty() || d.back() != str[i])
				d.push_back(str[i]);
			else
				d.pop_back();
		}
		while (!d.empty()) {
			cout << d.front();
			d.pop_front();
		}
		cout << "\n";
	}
	return 0;
}