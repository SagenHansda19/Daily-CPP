#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int  &i : a) cin >> i;
    //sort(a.rbegin(), a.rend());
    if(a[0] == a[n - 1]) {
        cout << "No\n";
        return;
    } else {
        cout << "Yes\n";
        reverse(a.begin() + 1, a.end());
        for(int i = 0; i < n; i++) {
            cout << a[i] << " \n"[i == n - 1];
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

