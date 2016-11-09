#include <cstdio>
#include <set>

using namespace std;

int main(){
	int n,tmp;
	set<int>s;
	scanf("%d", &n);
	for (int nc = 0; nc < n; nc++){
		scanf("%d", &tmp);
		s.insert(tmp);
	}

	for (int x : s){
		printf("%d\n", x);
	}
}