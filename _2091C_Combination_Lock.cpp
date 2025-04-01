#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    if(n % 2 == 0) {
        cout << "-1\n";
        return;
    }
    vector<int> ans;
    for(int i = 0; i < n; i++) {
        ans.push_back(i + 1);
    }
    reverse(ans.begin(), ans.end());
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

