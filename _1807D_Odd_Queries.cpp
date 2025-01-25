#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    vector<int> pre(n + 1);
    for(int i = 0; i < n; i++) pre[i + 1] = pre[i] + a[i];
    while(q--) {
        int l, r, k;
        cin >> l >> r >> k;
        long long sum = 1LL * (r - l + 1) * k;
        sum += pre[l - 1];
        sum += pre[n] - pre[r];
        cout << ((sum & 1) ? "Yes\n" : "No\n"); 
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

