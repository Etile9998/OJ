#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int n, i;
	cin >> n;
	for (i = 1; i <= 10; i++) {
		printf("%d x %d = %d\n", n, i, n*i);
	}
	return 0;
}
