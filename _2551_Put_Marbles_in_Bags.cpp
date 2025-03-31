#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    ll putMarbles(vector<int>& weights, int k) {
        if(k == 1) return 0;
        vector<ll> mm;
        int n = weights.size();
        for(int i = 0; i < n - 1; i++) {
            mm.push_back(weights[i] + weights[i + 1]);
        }  
        sort(mm.begin(), mm.end());
        k--;
        int m = mm.size();
        ll mx = accumulate(mm.begin() + n - k - 1, mm.end(), 0LL);
        ll mn = accumulate(mm.begin(), mm.begin() + k, 0LL);
        return mx - mn;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<int> a;
    int val;
    while(cin >> val) {
        a.push_back(val);
        if(cin.get() == '\n') break;
    }
    cin >> val;
    cout << sol.putMarbles(a, val) << '\n';
    return 0;
}

