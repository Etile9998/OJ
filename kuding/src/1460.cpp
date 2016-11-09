#include <iostream>
using namespace std;

long long d[65][10];
long long ans[65];
void proc() {
	for (int j = 0; j < 10; j++)
		d[1][j] = 1;
	ans[1] = 10;
	for (int i = 2; i < 65; i++) {
		long long sum = 0;
		for (int j = 0; j < 10; j++) {
			d[i][j] = d[i - 1][j] + sum;
			sum += d[i - 1][j];
			ans[i] += d[i][j];
		}
	}
}
int main() {
	int t,n;
	cin >> t;
	proc();
	while(t--){
	cin >> n;
	cout << ans[n] << endl;
	}
}