#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    sort(a.begin(), a.end());
    bool is = true;
    for(int i = 1; i < n; i++) {
        if(a[i] != a[i - 1]) {
            is = false;
            break;
        }
    }
    if(is) {
        cout << "-1\n";
        return;
    }
    int x = 1;
    for(int i = 1; i < n; i++) {
        if(a[i] != a[i - 1]) break;
        else x++;
    }
    cout << x << " " << n - x << '\n';
    for(int i = 0; i < x; i++) {
        cout << a[i] << " \n"[i == x - 1];
    }
    for(int i = x; i < n; i++) {
        cout << a[i] << " \n"[i == n - 1];      
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

