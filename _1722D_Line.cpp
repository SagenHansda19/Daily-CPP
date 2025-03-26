#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    vector<ll> a;
    ll tot = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == 'L') {
            a.push_back((n - 1 - i) - i);
            tot += i;
        } else {
            a.push_back(i - (n - 1 - i));
            tot += n - 1 - i;
        }
    }
    sort(a.rbegin(), a.rend());
    for(int i = 0; i < n; i++) {
        if(a[i] > 0) tot += a[i];
        cout << tot << " ";
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

