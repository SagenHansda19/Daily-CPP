#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; 
    cin >> n >> k;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    int c = 1;
    for(int i = 0; i < n; i++) {
        if(a[i] == c) c++;
    }
    cout << (n - c + k) / k << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

