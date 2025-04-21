#include <bits/stdc++.h>
using namespace std;

class Solution {
    using ll = long long;
public:
    int numberOfArrays(vector<int>& diff, int lower, int upper) {
        ll mn = 0, mx = 0, pre = 0;
        for(int i : diff) {
            pre += i;
            mn = min(mn, pre);
            mx = max(mx, pre);
        }
        ll ans = (upper - lower + 1) - (mx - mn);
        return ans < 0 ? 0 : ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<int> a;
    int l, r;
    while(cin >> l) {
        a.push_back(l);
        if(cin.get() == '\n') break;
    }
    cin >> l >> r;
    cout << sol.numberOfArrays(a, l, r) << '\n';
    return 0;
}

