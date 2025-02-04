#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MIN;
        for(int i = 0; i < n; i++) {
            int in = 0;
            in += nums[i];
            for(int j = i + 1; j < n; j++) {
                if(nums[j] > nums[j - 1]) {
                    in += nums[j];
                }
                else if(nums[j] <= nums[j - 1]) {
                    break;
                }
            }
            ans = max(ans, in);
        }
        return ans;
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
    cout << sol.maxAscendingSum(a) << '\n';
    return 0;
}

