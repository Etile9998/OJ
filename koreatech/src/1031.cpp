#include <iostream>
#include <stack>
using namespace std;

const char c[17] = "0123456789ABCDEF";
int main() {
	int t;
	stack<char>s;
	cin >> t;
	while (t--) {
		int a, b;
		cin >> a >> b;
		while (a) {
			s.push(c[a%b]);
			a /= b;
		}
		while (!s.empty()) {
			cout << s.top();
			s.pop();
		}
		cout << endl;
	}

	return 0;
}