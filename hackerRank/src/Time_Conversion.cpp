#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	int a = 0;
	string time;
	cin >> time;
	a = 10 * (time[0] - '0') + time[1] - '0';
	if (time[8] == 'P') {
		if(a!=12)
		a += 12;
		time[0] = a / 10 + '0';
		time[1] = a % 10 + '0';
	}
	else if (a == 12) {
		a -= 12;
		time[0] = a / 10 + '0';
		time[1] = a % 10 + '0';
	}
	time.resize(8);
	cout << time;
	return 0;
}
