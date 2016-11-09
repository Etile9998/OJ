#include <cstdio>
#include <vector>
using namespace std;
/*

*/
int main(){
	int n, ans = 0;
	int d[101][10] = { 0, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
	scanf("%d", &n);
	for (size_t i = 0; i < n - 1; i++){
		for (size_t j = 0; j < 10; j++){
			if (j == 0){
				d[i + 1][j] += d[i][1];
			}
			else if (j == 9){
				d[i + 1][j] += d[i][8];
			}
			else{
				d[i + 1][j] += d[i][j - 1] + d[i][j + 1];
			}
			d[i + 1][j] %= 1000000000;
		}
	}
	for (size_t i = 0; i < 10; i++){
		ans += d[n - 1][i];
		ans %= 1000000000;
	}

	printf("%d\n", ans);

}