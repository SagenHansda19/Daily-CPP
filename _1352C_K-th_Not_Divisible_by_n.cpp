#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int rnk(int n, int mid) {
    int bef = (int)mid / n;
    return mid - bef;
}

void solve() {
    int n, k;
    cin >> n >> k;
    ll l = 1, r = 2LL * k, ans = 0; 
    while(l <= r) {
        ll mid = l + (r - l) / 2;
        if(rnk(n, mid) >= k) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
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

