#ifdef _CONSOLE
#include "bits/stdc++.h"
#else
#include <bits/stdc++.h>
#endif
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

#define rep(i,a,b) for(int i = a; i < b; ++i)
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define mod 1000000007

int N;
int h[500001];
int a[500001];
stack<pii>s;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
#ifdef _CONSOLE
    freopen("sample.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    // your code goes here
    cin >> N;
    rep(i, 1, N + 1) {
        cin >> h[i];
        while (!s.empty()) {
            if (s.top().fi < h[i])
                s.pop();
            else {
                cout << s.top().se<<' ';
                break;
            }
        }
        if (s.empty())
            cout << 0 << ' ';
        s.push(mp(h[i], i));
    }
    return 0;
}