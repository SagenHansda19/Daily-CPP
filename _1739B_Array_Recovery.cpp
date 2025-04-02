#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    vector<int> ans(n);
    ans[0] = a[0];
    for(int i = 1; i < n; i++) {
        if(a[i] > 0 && ans[i - 1] >= a[i]) {
            cout << "-1\n";
            return;
        }
        ans[i] = a[i] + ans[i - 1];
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

