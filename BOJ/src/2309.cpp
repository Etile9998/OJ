#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	vector<int>a(9);
	int sum = 0;
	for (int i = 0; i < 9; i++){
		scanf("%d", &a[i]);
		sum += a[i];
	}

	for (int i = 0; i < 8; i++){
		for (int j = i + 1; j < 9; j++){
			if (sum - a[i] - a[j] == 100){
				a[i] = a[j] = 99999;
			}
		}
	}

	sort(a.begin(), a.end());
	for (int i = 0; i < 7; i++)
		printf("%d\n", a[i]);

	return 0;
}