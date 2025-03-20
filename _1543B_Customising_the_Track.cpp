#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    ll sum = 0;
    for(int &i : a) {
        cin >> i;
        sum += i;
    }
    ll k = sum % n;
    ll ans = k * (n - k);
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

