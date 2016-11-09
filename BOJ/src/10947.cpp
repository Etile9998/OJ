#include <random>
#include <cstdio>
#include <set>

using namespace std;
int main(){
	random_device rd;
	set<int> s;
	while (s.size()<6)
		s.insert(rd() % 45 + 1);
	
	for (auto x : s){
		printf("%d ", x);
	}
	return puts("");
}