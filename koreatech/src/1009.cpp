#include <iostream>
using namespace std;

int proc(int a) {
	int b=0;
	for (int i = 0; i < 4;i++) {
		b <<= 8;
		b += (a & 0x000000ff);
		a >>= 8;
	}
	return b;
}
int main() {
	int t,a;
	cin >> t;
	while (t--) {
		cin >> a;
		cout << proc(a) << endl;
	}
}