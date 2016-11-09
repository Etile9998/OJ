#include <iostream>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		if (n % 15 == 0)
			cout << "Fizz Buzz\n";
		else if (n % 3 == 0)
			cout << "Fizz\n";
		else if (n % 5 == 0)
			cout << "Buzz\n";
		else
			cout << "-\n";
	}
	return 0;
}