#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    sort(a.begin(), a.end()); 
    if(a[0] != 1) {
        cout << "No\n";
        return;
    }
    bool is = true;
    long long x = 1;
    for(int i = 1; i < n; i++) {
        if(a[i] > x) {
            is = false;
            break;
        }
        x += a[i];
    }
    cout << (is ? "Yes\n" : "No\n");
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

