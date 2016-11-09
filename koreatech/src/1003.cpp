#include <cstdio>
#include <tuple>
#include <vector>
using namespace std;

vector<tuple<int, int, int> > vt;

bool check(int a, int b, int c) {
	for (int i = 0; i < vt.size(); i++) {
		if ((get<0>(vt[i]) == a) && (get<1>(vt[i]) == b) && (get<2>(vt[i]) == c))
			return 0;
	}
	return 1;
}
int main() {
	int n, s[300], ans = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &s[i]);

	for (int i = 0; i < n - 2; i++)
	{
		for (int j = i + 1; j < n - 1; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				if (s[i] + s[j] + s[k] == 0)
				{
					if (check(s[i], s[j], s[k])) {
						vt.push_back(make_tuple(s[i], s[j], s[k]));
						ans++;
					}
				}
			}
		}
	}
	printf("%d\n", ans);
}