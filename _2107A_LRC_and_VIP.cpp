#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    int mx = *max_element(a.begin(), a.end());
    set<int> fk(a.begin(), a.end());
    if(fk.size() == 1) {
        cout << "No\n";
        return;
    }
    cout << "Yes\n";
    for(int &i : a) {
        if(i == mx) cout << "1 ";
        else cout << "2 ";
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

