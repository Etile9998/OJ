#include <iostream>
using namespace std;

int foo(int n) {
	if (n % 2)
		return 1;
	if (2 <= n && n <= 5)
		return 0;
	if (6 <= n && n <= 20)
		return 1;
	return 0;
}
int main() {
	int n;
	cin >> n;
	if (foo(n))
		cout << "Weird";
	else
		cout << "Not Weird";
	return 0;
}