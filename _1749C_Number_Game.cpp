#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    sort(a.begin(), a.end());
    multiset<int> ms;
    for(int i : a) ms.insert(i);
    int ans = 0;
    for(int k = 1; ; k++) {
        auto it = lower_bound(ms.begin(), ms.end(), k + 1);
        if(it == ms.begin()) break;
        it--;
        ms.erase(it);
        ans = k;
        if(ms.count(1) == 0) break;
        ms.erase(ms.find(1));
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

