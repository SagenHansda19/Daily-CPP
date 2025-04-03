#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    vector<int> pp(1001, -1);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        pp[a[i]] = i;
    }
    int ans = -1;
    for(int i = 1; i < 1001; i++) {
        for(int j = 1; j < 1001; j++) {
            if(__gcd(i, j) == 1) {
                if(pp[i] >= 0 && pp[j] >= 0) {
                    ans = max(ans, pp[i] + pp[j] + 2);
                }
            }
        }
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

