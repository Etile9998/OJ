#include <queue>
#include <cstdio>

int main() {
	int n, m,ans=0;
	int tmp;
	std::priority_queue<int> q;

	scanf("%d%d", &n, &m);
	m = n - m;

	while (n--) {
		scanf("%d", &tmp);
		q.push(-tmp);
	}
	while (m--) {
		ans -= q.top();
		q.pop();
	}
	printf("%d", ans);
	return 0;
}