#include <iostream>
using namespace std;

bool check(int n) {
	if (n == 1)
		return 1;

	int c = 0;// check
	do {
		c += n & 1;
		if (c > 1)
			return 0;
		n >>= 1;
	} while (n);
	return 1;
}
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cout << i << " ";
		if (check(i+1))
			cout << endl;
	}
	return 0;
}