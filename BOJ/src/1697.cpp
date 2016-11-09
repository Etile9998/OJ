#include <cstdio>
#include <algorithm>
#include <queue>
using namespace std;

int ans[200001];
bool check[200001];
int main() {
	int n, k, i, j;
	queue<pair<int, int> >q;
	scanf("%d%d", &n, &k);

	q.push(make_pair(n, 0));
	while (!check[k]) {
		int a = q.front().first;
		int b = q.front().second;
		q.pop();
		if (check[a])continue;
		
		check[a] = 1;
		ans[a] = b;

		if (a > 0)
			q.push(make_pair(a - 1, b + 1));
		if (a < k)
			q.push(make_pair(a + 1, b + 1));
		if (a <= 100000)
			q.push(make_pair(a + a, b + 1));
	}
	printf("%d", ans[k]);
	return 0;
}