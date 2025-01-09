#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, l;
    cin >> a >> b >> l;
    set<int> ans;
    while(true) {
        int x = l;
        while(true) {
            ans.insert(x);
            if(x % a != 0) break;
            x /= a;
        }
        if(l % b != 0) break;
        l /= b;
    }
    cout << ans.size() << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

