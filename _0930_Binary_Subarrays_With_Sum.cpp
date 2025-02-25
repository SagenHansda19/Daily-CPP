#include <bits/stdc++.h>
using namespace std;

class Solution {
    int solve(vector<int>& nums, int goal) {
        if(goal < 0) return 0;
        int n = nums.size(), l = 0, r = 0, ans = 0;
        int sum = 0;
        while(r < n) {
            sum += nums[r];
            while(sum > goal) {
                sum -= nums[l];
                l++;
            }
            ans += r - l + 1;
            r++;
        }
        return ans;
    }
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return solve(nums, goal) - solve(nums, goal - 1);
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<int> a;
    int val, k;
    while(cin >> val) {
        a.push_back(val);
        if(cin.get() == '\n') break;
    }
    cin >> k;
    cout << sol.numSubarraysWithSum(a, k) << '\n';
    return 0;
}

