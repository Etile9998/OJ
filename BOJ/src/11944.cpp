#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main(){
	string n;
	int m;
	cin >> n >> m;
	if (n.length() * atoi(n.c_str()) > m){
		int cnt = 0;
		for (int i = 0; cnt < m; cnt++, i = (i + 1) % n.length())
			cout << n[i];
	}
	else{
		for (int i = 0; i < atoi(n.c_str()); i++)
			cout << n;
	}
	return 0;
}