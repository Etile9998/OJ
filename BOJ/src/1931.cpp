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

struct Part {
    int st, ed;
};

bool cmp(Part a, Part b) {
    return a.ed < b.ed || a.ed == b.ed && a.st < b.st;
}
int N, cur, ans;
Part P[100000];

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
#ifdef _CONSOLE
    freopen("sample.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    // your code goes here
    cin >> N;
    rep(i, 0, N) {
        cin >> P[i].st >> P[i].ed;
    }
    sort(P, P + N, cmp);
    rep(i, 0, N) {
        if (cur <= P[i].st) {
            cur = P[i].ed;
            ++ans;
        }
    }
    cout << ans << '\n';
    return 0;
}