#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    int ans = INT_MAX;
    for(int i = 1; i < n; i++) {
        if(a[i] < a[i - 1]) {
            cout << "0\n";
            return;
        }
        ans = min(ans, a[i] - a[i - 1]);
    }
    //cout << ans << '\n';
    cout << (ans == 0 ? 1 : (ans / 2) + 1) << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

