#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    map<int, int> f;
    for(int i = 0; i < n; i++) f[a[i]]++;
    int ans = f.size();
    set<int> s;
    for(int i = n - 1; i >= 0; i--) {
        if(i != n - 1 && a[i + 1] < a[i]) break;
        f[a[i]]--;
        if(f[a[i]] == 0) {
            f.erase(a[i]);
            s.erase(a[i]);
        } else {
            s.insert(a[i]);
        }
        if(s.size() == 0) {
            ans = min(ans, (int)f.size());
        }
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

