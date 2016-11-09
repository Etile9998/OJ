#include <cstdio>
#include <stack>
#include <cstring>
using namespace std;

int main() {
	//freopen("test.in", "r", stdin);
	stack<int> s;
	char str[10];
	int n, tmp;
	scanf("%d", &n);
	while (n--) {
		scanf("%s", str);

		if (!strcmp(str, "push")) {
			scanf("%d", &tmp);
			s.push(tmp);
		}
		else if (!strcmp(str, "pop")) {
			if (s.empty()) {
				printf("-1\n");
				continue;
			}

			printf("%d\n", s.top());
			s.pop();
		}
		else if (!strcmp(str, "size")) {
			printf("%d\n", s.size());
		}
		else if (!strcmp(str, "empty")) {
			printf("%d\n", s.empty());
		}
		else if (!strcmp(str, "top")) {
			if (s.empty()) {
				printf("-1\n");
				continue;
			}
			printf("%d\n", s.top());
		}
	}
	return 0;
}