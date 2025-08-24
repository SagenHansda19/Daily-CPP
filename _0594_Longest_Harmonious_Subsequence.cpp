#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
   public:
    int findLHS(vector<int>& nums) {
        int n = nums.size(), ans = 0;
        int l = 0, r = 0;
        sort(nums.begin(), nums.end());
        while (r < n) {
            int x = nums[r];
            if (l < r && x - nums[l] > 1) l++;
            if (x - nums[l] == 1) ans = max(ans, r - l + 1);
            r++;
        }
        return ans;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<int> a;
    int b;
    while (cin >> b) {
        a.push_back(b);
        if (cin.get() == '\n') break;
    }
    cout << sol.findLHS(a) << '\n';
    return 0;
}
