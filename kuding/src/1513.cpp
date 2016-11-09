#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	getline(cin, str);
	for (int i = 0; str[i]; i++) {
		if ('A' <= str[i] && str[i] <= 'C')
			str[i] += 23;
		else if ('D' <= str[i] && str[i] <= 'Z')
			str[i] -= 3;
	}
	cout << str;
	return 0;
}