#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n - 1);
    for(int &i : a) cin >> i;
    vector<int> ans;
    ans.push_back(a[0]);
    for(int i = 0; i < n - 2; i++) {
        ans.push_back(min(a[i], a[i + 1]));
    }
    ans.push_back(a[n - 2]);
    for(size_t i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

