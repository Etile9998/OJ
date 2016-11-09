#include <iostream>
using namespace std;

long long check(long long a) {
	if (a < 2)
		return 1;
	if (a == 2 || a == 3 || a == 5 || a == 7)
		return 0;
	if (a % 2 == 0)
		return 1;
	for (long long i = 3; i*i <= a; i += 2) {
		if (a%i == 0)
			return i;
	}
	return 0;
}
int main() {
	long long n;
	cin >> n;
	if (!check(n))
		cout << "prime";
	else
		cout << "not prime";
	return 0;
}