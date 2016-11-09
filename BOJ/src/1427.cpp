#include <cstdio>
#include <algorithm>
#include <functional>
#include <cstring>
using namespace std;
int main() {
	char str[11] = {};
	scanf("%s", str);
	sort(str, str + strlen(str), greater<char>());
	printf("%s", str);
	return 0;
}