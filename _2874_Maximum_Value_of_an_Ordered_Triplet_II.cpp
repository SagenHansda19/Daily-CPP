#include <bits/stdc++.h>
using namespace std;

class Solution {
    using ll = long long;
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        ll ans = 0, lm = 0, mum = 0;
        for(int i = 0; i < n; i++) {
            ans = max(ans, mum * nums[i]);
            mum = max(mum, lm - nums[i]);
            lm = max(lm, (ll)nums[i]);
        }
        return ans < 0 ? 0 : ans;
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
    cout << sol.maximumTripletValue(a) << '\n';
    return 0;
}

