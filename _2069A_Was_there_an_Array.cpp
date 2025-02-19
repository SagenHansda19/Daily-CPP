#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    n -= 2;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    if(n <= 2) {
        cout << "Yes\n";
        return;
    }
    for(int i = 1; i < n - 1; i++) {
        if(a[i] == 0) {
            if(a[i - 1] == 1 && a[i + 1] == 1) {
                cout << "No\n";
                return;
            }
        }
    }
    cout << "Yes\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

