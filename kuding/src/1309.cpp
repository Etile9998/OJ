#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> >map;
vector<bool>label;
int ans;
void dfs(int x) {

}
int main() {
	int n, m,u,v;
	cin >> n >> m;
	map.resize(n + 1);
	label.resize(n + 1);
	while (m--) {
		cin >> u >> v;
		map[u].push_back(v);
		map[v].push_back(u);
	}
}