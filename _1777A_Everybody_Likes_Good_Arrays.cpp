#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

void solve() { 
    int n; cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    //int ans = 0;
    //for(int i = 0; i + 1 < n; i++) {
        //ans += a[i] % 2 == a[i + 1] % 2;
    //}
    vector<ll> stk;
    int ans = 0;
    int i = 1;
    stk.push_back(a[0]);
    while(i < n) {
        if(stk.back() % 2 == a[i] % 2) {
            ll ad = a[i] * stk.back();
            stk.pop_back();
            stk.push_back(ad);
            ans++;
        } else {
            stk.push_back(a[i]);
        }
        i++;
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

