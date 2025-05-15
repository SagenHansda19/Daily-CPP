#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    vector<ll> ans(n);
    int x = a[0];
    for(int i = 0; i < n; i++) {
        x = max(a[i], x);
        ans[n - 1 - i] += x;
    }
    ll sum = 0;
    for(int i = 0; i < n; i++) {
        ans[i] += sum;
        sum += a[n - 1 - i];
    }
    for(int i = 0; i < n; i++) {
        cout << ans[i] << " \n"[i == n - 1];
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

