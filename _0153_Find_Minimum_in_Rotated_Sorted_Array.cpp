#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans = INT_MAX, l = 0, r = nums.size() - 1;
        while(l <= r) {
            int mid = l + (r - l) / 2;
            // ans = min(ans, nums[mid]);
            if(nums[l] <= nums[mid]) {
                ans = min(ans, nums[l]);
                l = mid + 1;
            } else {
                ans = min(ans, nums[mid]);
                r = mid - 1;
            }
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
    cout << sol.findMin(a) << '\n';
    return 0;
}

