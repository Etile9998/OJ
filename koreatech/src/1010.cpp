#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;
bool isPrime(int n) {
	if (n < 2)
		return false;
	if (n == 2 || n == 3 || n == 5 || n == 7)
		return true;
	if (n % 2 == 0)
		return false;
	for (int i = 3; i*i <= n; i += 2) {
		if (n%i == 0)
			return false;
	}
	return true;
}
void proc(int a, int len) {
	if (!isPrime(a))
		return;
	if (!len) {
		v.push_back(a);
		return;
	}
	a *= 10;
	len--;
	proc(a + 1, len);
	proc(a + 3, len);
	proc(a + 7, len);
	proc(a + 9, len);
}
int main() {
	int n;
	cin >> n;
	n--;
	proc(2, n);
	proc(3, n);
	proc(5, n);
	proc(7, n);
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << endl;
	return 0;
}