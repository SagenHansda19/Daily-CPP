#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i, i = abs(i);;
    int mm = 0;
    for(int i = 1; i < n; i++) {
        if(a[i] > a[0]) mm++;
    }
    if(mm >= (n - 1) / 2) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    } 
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

