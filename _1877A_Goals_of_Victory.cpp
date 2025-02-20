#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    n--;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    int ans = 0;
    for(int i : a) ans += i;
    cout << -1 * ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

