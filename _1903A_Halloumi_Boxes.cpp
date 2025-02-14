#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    if(k == 1) {
        bool is = true;
        for(int i = 0; i < n - 1; i++) {
            if(a[i] > a[i + 1]) {
                is = false;
            }
        }
        if(!is) {
            cout << "No\n";
            return;
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

