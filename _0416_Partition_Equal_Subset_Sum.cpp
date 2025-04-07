#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if (sum % 2) return false;
        int tt = sum / 2;
        vector<bool> dp(tt + 1, false);
        dp[0] = true;
        for (int i : nums) {
            for (int j = tt; j >= i; --j) {
                dp[j] = dp[j] || dp[j - i];
            }
        }
        return dp[tt];
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
    cout << (sol.canPartition(a) ? "Yes\n" : "No\n");
    return 0;
}

