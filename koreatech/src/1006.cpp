#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i, n, cc[8] = { 50000,10000,5000,1000,500,100,50,10 }, arr[8];
	cin >> n;
	while (n--) {
		for (i = 0; i < 8; i++)
			arr[i] = 0;

		int a, b;
		cin >> a >> b;
		b -= a;

		i = 0;
		while (b) {
			arr[i] = b / cc[i];
			b = b%cc[i];
			i++;
		}
		for (i = 0; i < 8; i++) {
			cout << arr[i];
			if (i < 7)
				cout << " ";
		}
		if (n)
			cout << endl;
	}

	return 0;
}