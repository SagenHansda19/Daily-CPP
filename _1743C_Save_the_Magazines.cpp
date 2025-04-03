#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    ll ans = 0;
    for(int i = 0, j = -1; i < n; i++) {
        if(s[i] == '0') j = i;
        else if(j >= 0 && a[i] < a[j]) {
            swap(s[i], s[j]);
            j = i;
        }
    }
    for(int i = 0; i < n; i++) {
        if(s[i] == '1') ans += a[i];
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

