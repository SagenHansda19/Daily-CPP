#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll what(vector<int> &a) {
    ll oo = 0, ans = 0;
    for(size_t i = 0; i < a.size(); i++) {
        if(a[i] == 1) oo++;
        else ans += oo;
    }
    return ans;
}

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    ll ans = 0;
    ll before = what(a);
    ans = max(ans, before);
    for(int i = 0; i < n; i++) {
        if(a[i] == 0) {
            a[i] = 1;
            ll l0 = what(a);
            ans = max(ans, l0);
            a[i] = 0;
            break;
        }
    } 
    for(int i = n - 1; i >= 0; i--) {
        if(a[i] == 1) {
            a[i] = 0;
            ll r1 = what(a);
            ans = max(ans, r1);
            a[i] = 1;
            break;
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

