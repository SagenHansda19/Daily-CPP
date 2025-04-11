#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n), b(n);
    for(int &i : a) cin >> i;
    for(int &i : b) cin >> i;
    vector<int> c;
    for(int i = 0; i < n; i++) {
        c.push_back(b[i] - a[i]);
    }
    sort(c.begin(), c.end());
    int l = 0, r = n - 1, ans = 0;
    while(l < r) {
        if(c[l] + c[r] >= 0) {
            ans++;
            l++; r--;
        } else {
            l++;
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

