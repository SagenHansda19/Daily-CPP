#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, s, r;
    cin >> n >> s >> r;
    int ll = s - r;
    cout << ll << " ";
    for(int i = 2; i <= n; i++) {
        int l = n - i;
        int cur = r - l;
        cur = min(cur, ll);
        cout << cur << " ";
        r -= cur;
    }
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

