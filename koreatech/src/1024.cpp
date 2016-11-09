#include <iostream>
#include <string>
using namespace std;

int proc(int a,int bit) {
	return bit > 0 ? a : -a;
}

int main() {
	int sum = 0, a = 0, bit=1;
	string s;
	cin >> s;
	for (int i = 0; s[i]; i++) {
		if (s[i] == '+') {
			sum += proc(a, bit);
			bit = 1;
			a = 0;
		}
		else if (s[i] == '-') {
			sum += proc(a, bit);
			bit = -1;
			a = 0;
		}
		else
			a = a * 10 + s[i] - '0';
	}
	sum += proc(a, bit);
	cout << sum;
	return 0;
}