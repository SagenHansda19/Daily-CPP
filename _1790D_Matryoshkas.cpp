#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    map<int, int> f;
    set<int> s;
    for(int i : a) {
        f[i]++;
        s.insert(i);
        s.insert(i + 1);
    }
    int ans = 0, ll = 0;
    for(auto i : s) {
        int c = f[i];
        ans += max(0, c - ll);
        ll = c;
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

