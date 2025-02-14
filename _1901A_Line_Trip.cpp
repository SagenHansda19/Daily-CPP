#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    int dd = 2 * (x - a[n - 1]);
    dd = max(dd, a[0]);
    for(int i = 1; i < n; i++) {
        dd = max(dd, a[i] - a[i - 1]);
    }
    cout << dd << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

