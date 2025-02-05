#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<ll> a(n);
    for(ll &i : a) cin >> i;
    if(n == 1) {
        cout << "0\n";
        return;
    }
    int ans = 0;
    for(int i = n - 2; i >= 0; i--) {
        if(a[i] >= a[i + 1]) {
            while(a[i] >= a[i + 1]) {
                if(a[i] == 0) break;
                a[i] /= 2;
                ans++;
            }
        }
    }
    //for(int i : a) cout << i << " ";
    //cout << '\n';
    for(int i = 0; i < n - 1; i++) {
        if(a[i] >= a[i + 1]) {
            cout << "-1\n";
            return;
        }
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}

