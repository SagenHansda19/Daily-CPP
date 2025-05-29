#include <algorithm>
#include <cassert>
#include <climits>
#include <cmath>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<pair<int, int>> a(n);
    for(auto &i : a) cin >> i.first >> i.second;
    multiset<int> rr, cc;
    for(auto &i : a) {
        rr.insert(i.first);
        cc.insert(i.second);
    }
    auto clc = [&]() {
        int mnrr = *rr.begin();
        int mxrr = *rr.rbegin();
        int mncc = *cc.begin();
        int mxcc = *cc.rbegin();
        return (ll)(mxrr - mnrr + 1) * (mxcc - mncc + 1);
    };
    ll ans = clc();
    if(n == 1) {
        cout << "1\n";
        return;
    }
    for(int i = 0; i < n; i++) {
        rr.erase(rr.find(a[i].first));
        cc.erase(cc.find(a[i].second));
        ll cur = clc();
        if(cur == n - 1) {
            int mnrr = *rr.begin();
            int mxrr = *rr.rbegin();
            int mncc = *cc.begin();
            int mxcc = *cc.rbegin();
            ans = min({ans, cur + (mxrr - mnrr + 1), cur + (mxcc - mncc + 1)});
        } else {
            ans = min(ans, cur);
        }
        rr.insert(a[i].first);
        cc.insert(a[i].second);
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

