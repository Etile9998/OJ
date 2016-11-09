#include <deque>
#include <string>
#include <iostream>
using namespace std;

int main(){
	int n;
	deque<int> d;
	cin >> n;
	for (int nc = 0; nc < n; nc++){
		string str;
		int num;
		cin >> str;
		if (str == "push_front"){
			cin >> num;
			d.push_front(num);
		}
		else if (str == "push_back"){
			cin >> num;
			d.push_back(num);
		}
		else if (str == "pop_front") {
			if (d.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << d.front() << endl;
				d.pop_front();
			}
		}
		else if (str == "pop_back") {
			if (d.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << d.back() << endl;
				d.pop_back();
			}
		}
		else if (str == "size") {
			cout << d.size() << endl;
		}
		else if (str == "empty") {
			cout << d.empty() << endl;
		}
		else if (str == "front") {
			if (d.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << d.front() << endl;
			}
		}
		else if (str == "back") {
			if (d.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << d.back() << endl;
			}
		}
	}

	return 0;
}

/*
push_front X: 정수 X를 덱의 앞에 넣는다.
push_back X: 정수 X를 덱의 뒤에 넣는다.
pop_front: 덱의 가장 앞에 있는 수를 빼고, 그 수를 출력한다. 만약, 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
pop_back: 덱의 가장 뒤에 있는 수를 빼고, 그 수를 출력한다. 만약, 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
size: 덱에 들어있는 정수의 개수를 출력한다.
empty: 덱이 비어있으면 1을, 아니면 0을 출력한다.
front: 덱의 가장 앞에 있는 정수를 출력한다. 만약 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
back: 덱의 가장 뒤에 있는 정수를 출력한다. 만약 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
*/