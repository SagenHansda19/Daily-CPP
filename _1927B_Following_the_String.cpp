#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    string ans = "";
    vector<int> f(26, 0);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 26; j++) {
            if(f[j] == a[i]) {
                ans += (char)(j + 'a');
                f[j]++;
                break;
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

