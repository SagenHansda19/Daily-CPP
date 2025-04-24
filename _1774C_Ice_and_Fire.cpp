#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k = 0;
    for (int i = 0; i < n - 1; i++) {
        if (i > 0 && s[i] == s[i - 1]) {
            k += 1;
        } else {
            k = 1;
        }
        cout << i + 2 - k << " \n"[i == n - 2];
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

