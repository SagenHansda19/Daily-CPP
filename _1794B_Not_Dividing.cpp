#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    for(int i = 0; i < n; i++) {
        if(a[i] == 1) a[i]++;
    }
    for(int i = 1; i < n; i++) {
        if(a[i] % a[i - 1] == 0) a[i]++;
    }
    for(int i = 0; i < n; i++) {
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

