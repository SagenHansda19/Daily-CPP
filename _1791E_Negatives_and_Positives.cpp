#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    int nn = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] < 0) nn++;
    }
    ll ans = 0;
    for(int i : a) ans += abs(i);
    if(nn & 1) {
        int mn = INT_MAX;
        for(int i : a) {
            if(i == 0) {
                mn = 0; 
                break;
            }
            mn = min(mn, abs(i));
        }
        ans -= 2 * mn; 
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

