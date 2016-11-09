#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int t, i;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int len = s.size();
		for (i = 0; i<len; i += 2)
			cout << s[i];
		cout << " ";
		for (i = 1; i<len; i += 2)
			cout << s[i];
		cout << endl;
	}
	return 0;
}
