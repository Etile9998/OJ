#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		int j;
		for (j = 0; j < n - i-1; j++)
			cout << " ";
		for ( ; j < n; j++)
			cout << "#";
		cout << "\n";
	}
	return 0;
}