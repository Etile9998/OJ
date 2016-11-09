#include <cstdio>
#include <vector>

using namespace std;

int main(){
	vector<bool> d(1000001,1);
	d[1] = 0;
	for (int i = 2; i*i < 1000001; i++){
		if (d[i]){
			for (int j = i*i; j < 1000001; j+=i){
				d[j] = 0;
			}
		}
	}
	
	int m, n;

	scanf("%d%d", &m, &n);
	for (; m <= n; m++){
		if (d[m])
			printf("%d\n", m);
	}
	return 0;
}