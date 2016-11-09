#include <iostream>
#include <cassert>
using namespace std;

int cnt, ans, pos, n, k;

int foo(int l, int stop) {
	while (1) {
		cnt++;
		pos = (pos + k) % n;
		if (pos == l) {
			ans += cnt;
			return 1;
		}
		if (pos == stop) {
			ans = 0;
			return 0;
		}
	}
}
int main() {
	// your code goes here
	int stop;
	stop = 0;
	cin >> n >> k;
	foo(3, 0) && foo(14, 3) && foo(6, 14);
	cout << ans;
	return 0;
}