#include <cstdio>
#include <queue>
#include <vector>
//#include <algorithm>
#include <utility>
#include <stack>
#include <functional>
using namespace std;

void dfs(vector<pair<int, int> > G, int v){
	stack<int> S;
	S.push(v);
	while (!S.empty()){
		v = S.top();
		S.pop();
		if (check[v])
	}
}

void bfs(vector<pair<int, int> > G, int v){

}

int main(){
	int n, m, v, from, to;
	scanf("%d%d%d", &n, &m, &v);
	bool check[1001] = { 0, };
	vector<pair<int, int> >vp(2 * m);
	for (size_t mc = 0; mc < m; mc++){
		scanf("%d%d", &from, &to);
		vp.push_back(make_pair(from, to));
		//vp.push_back(make_pair(to, from));
	}

	return 0;
}