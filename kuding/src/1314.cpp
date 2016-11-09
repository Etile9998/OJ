#include <iostream>
using namespace std;
int d[1000001];
int main() {
	d[1] = 1;
	d[2] = 2;
	int n;
	scanf("%d", &n);
	for (int i = 3; !d[n]; i++)
		d[i] = d[i - 1] + d[i - 2];
	printf("%d", d[n]);
	return 0;
}