#include <algorithm>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
	vector<int> e(4), m(2);// e引 mぬい 引
	int sum = 0;
	for (int i = 0; i < 4; i++){
		scanf("%d", &e[i]);
		sum += e[i];
	}
	for (int i = 0; i < 2; i++){
		scanf("%d", &m[i]);
		sum += m[i];
	}
	sort(e.begin(), e.end());
	sort(m.begin(), m.end());
	

	printf("%d\n", sum - e[0] - m[0]);
	return 0;
}