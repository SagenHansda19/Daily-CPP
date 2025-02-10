#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    if(n % 2 == 0) {
        cout << "Yes\n";
        for(int i = 0; i < n / 2; i++) {
            cout << 1 << " " << -1 << " ";
        }
        cout << '\n';
    }
    else {
        if(n > 3) {
            cout << "Yes\n";
            for(int i = 0; i < n / 2; i++) {
                cout << (n / 2) - 1 << " " << -(n / 2) << " ";
            }
            cout << (n / 2) - 1 << '\n';
        }
        else cout << "No\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

