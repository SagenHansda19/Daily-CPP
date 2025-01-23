#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubarrays(vector<int>& nums) {
        int n = nums.size();
        int ans = 1, bit = INT_MAX;
        for(int i = 0; i < n; i++) {
            bit &= nums[i];
            if(bit == 0) {
                ans++;
                bit = INT_MAX;
            }
        }
        if(bit == INT_MAX || bit > 0) ans--;
        return max(1, ans);
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
    cout << sol.maxSubarrays(a) << '\n';
    return 0;
}

