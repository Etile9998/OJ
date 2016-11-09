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
push_front X: ���� X�� ���� �տ� �ִ´�.
push_back X: ���� X�� ���� �ڿ� �ִ´�.
pop_front: ���� ���� �տ� �ִ� ���� ����, �� ���� ����Ѵ�. ����, ���� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
pop_back: ���� ���� �ڿ� �ִ� ���� ����, �� ���� ����Ѵ�. ����, ���� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
size: ���� ����ִ� ������ ������ ����Ѵ�.
empty: ���� ��������� 1��, �ƴϸ� 0�� ����Ѵ�.
front: ���� ���� �տ� �ִ� ������ ����Ѵ�. ���� ���� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
back: ���� ���� �ڿ� �ִ� ������ ����Ѵ�. ���� ���� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
*/