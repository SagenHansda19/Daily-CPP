#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    int mx = -1;
    for(int &i : a) cin >> i;
    vector<int> sr = a;
    sort(sr.rbegin(), sr.rend());
    for(int i = 0; i < n; i++) {
        if(a[i] != sr[0]) cout << a[i] - sr[0] << " ";
        else cout << a[i] - sr[1] << " ";
    }
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

