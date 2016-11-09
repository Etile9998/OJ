#include <iostream>
#include <algorithm>
using namespace std;

int stack[100000];
int index[100000];
int main() {
	int x, y, i;
	int ans1, remain;
	cin >> x >> y;
	ans1 = x / y;
	remain = x % y;
	int sp = 0;
	fill(index, index + 100000, -1);
	cout << x / y << ".";
	bool flag = 0;
	int idx = -1;
	
	while (remain) {
		if (sp && index[remain] >= 0) {
			flag = 1;
			idx = index[remain];
			break;
		}
		stack[sp++] = remain;
		index[remain] = ++idx;
		x = remain * 10;
		ans1 = x / y;
		remain = x % y;
	}
	for (i = 0; i < sp; i++) {
		if (flag && idx == i)
			cout << "(";
		cout << stack[i] * 10 / y;
	}
	if (flag)
		cout << ")";
	else
		cout << "0";
	return 0;
}