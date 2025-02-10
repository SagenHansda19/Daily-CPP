#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s = "";
    for(int i = 0; i < n; i++) {
        s += "BAN";
    }
    if(n == 1) {
        cout << "1\n2 3\n";
    }
    else {
        cout << n / 2 + n % 2 << '\n';
        int l = 2, r = 3 * n;
        while(l < r) {
            cout << l << " " << r << " ";
            l += 3;
            r -= 3;
        }
        cout << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

