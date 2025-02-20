#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    vector<int> b(2);
    for(int i : a) {
        if(i & 1) b[1]++;
        else b[0]++;
    }
    if(b[1] & 1) {
        cout << "No\n";
    } else {
        cout << "Yes\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

