#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    vector<int> f(1e5 + 1, 0);
    if(n == 1 || n == 2) {
        cout << "Yes\n";
        return;
    }
    for(int i : a) {
        f[i]++;
    }
    //sort(f.rbegin(), f.rend());
    //for(int i = 0; i < 10; i++) {
        //cout << f[i] << " \n"[i == 9];
    //}
    int ff = 0;
    for(int i : f) {
        if(i > 0) ff++;
    }
    if(ff > 2) {
        cout << "No\n";
        return;
    }
    if(ff == 1) {
        cout << "Yes\n";
        return;
    }
    sort(f.rbegin(), f.rend());
    cout << (abs(f[0] - f[1]) <= 1 ? "Yes\n" : "No\n");
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

