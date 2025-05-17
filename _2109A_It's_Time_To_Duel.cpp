#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    if(accumulate(a.begin(), a.end(), 0) == n) {
        cout << "Yes\n";
        return;
    }
    for(int i = 0; i < n - 1; i++)  {
        if(!a[i] && !a[i + 1]) {
            cout << "Yes\n";
            return;
        }
    }
    cout << "No\n";
}
    
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

