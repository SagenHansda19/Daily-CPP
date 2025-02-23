#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    int two = count(a.begin(), a.end(), 2);
    int t = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] == 2) t++, two--;
        if(t == two) { 
            cout << i + 1 << '\n';
            return;
        }
    }
    cout << "-1\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

