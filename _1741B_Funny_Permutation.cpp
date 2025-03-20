#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    if(n == 1 || n == 3) {
        cout << "-1\n";
        return;
    }
    vector<int> ans;
    for(int i = n; i > 0; i--) ans.push_back(i);
    for(int i = 0; i < n; i++) {
        if(i + 1 == ans[i] && n == 5) {
            swap(ans[i], ans[i + 2]);
        } else if(i + 1 == ans[i] && n > 5) {
            swap(ans[i], ans[i + 1]);
        }
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

