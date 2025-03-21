#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    if(n % 2 == 1) {
        cout << "No\n";
        return;
    }
    sort(a.begin(), a.end());
    vector<int> ans;
    for(int i = 0; i < n / 2; i++) {
        ans.push_back(a[i]);
        ans.push_back(a[i + n / 2]);
    }
    bool is = true;
    for(int i = 0; i < n; i++) {
        if(ans[i] == ans[(i + 1) % n]) {
            cout << "No\n";
            return;
        }
    }
    cout << "Yes\n";
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

