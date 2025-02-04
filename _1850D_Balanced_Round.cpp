#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    sort(a.begin(), a.end());
    int ans = 0;
    int in = 1;
    for(int i = 1; i < n; i++) {
        if(a[i] <= k + a[i - 1]) {
            in++;
        }
        else {
            ans = max(ans, in);
            in = 1;
        }
    }
    ans = max(ans, in);
    cout << n - ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

