#ifdef _CONSOLE
#include "bits/stdc++.h"
#else
#include <bits/stdc++.h>
#endif
using namespace std;

typedef long long ll;

#define rep(i,a,b) for(int i = a; i < b; ++i)
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define mod 1000000007

int t, len;
string k, ans;

bool check9() {
    rep(i, 0, len) {
        if (ans[i] != '9')
            return 0;
    }
    return 1;
}

void next() {
    int pos = (len - 1) / 2;
    while (ans[pos] == '9') {
        ans[pos] = '0';
        pos--;
    }
    ++ans[pos];
}

void make() {
    rep(i, 0, len / 2) {
        ans[len - i - 1] = ans[i];
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
#ifdef _CONSOLE
    freopen("sample.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    // your code goes here
    cin >> t;
    while (t--) {
        cin >> k;
        ans = k;
        len = k.length();
        make();
        while (ans <= k) {
            if (check9()) {
                break;
            }
            next();
            make();
        }
        if (check9()) {
            cout << 1;
            rep(i, 0, len - 1) {
                cout << 0;
            }
            cout << 1 << '\n';
        }
        else
            cout << ans << '\n';
    }

    return 0;
}
