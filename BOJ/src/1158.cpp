#include <iostream>
#include <vector>
using namespace std;

#define rep(i,a,b) for(int i = a; i < b; i++)

vector<int> v;

void prec(int n) {
    v.resize(n);
    rep(i, 0, n)
        v[i] = i + 1;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n, m, pos=0;
    cin >> n >> m;
    prec(n);

    cout << '<' << m;
    pos += m - 1;
    pos %= v.size();
    v.erase(v.begin() + pos);
    while (!v.empty()) {
        pos += m - 1;
        pos %= v.size();
        cout << ", " << v[pos];
        v.erase(v.begin() + pos);
    }
    cout << '>' << '\n';
    return 0;
}