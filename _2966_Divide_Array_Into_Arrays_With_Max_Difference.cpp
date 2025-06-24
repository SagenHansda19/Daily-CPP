#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
   public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for (int i = 0; i < n; i += 3) {
            if (nums[i + 2] - nums[i] > k) return {};
            ans.push_back({nums[i], nums[i + 1], nums[i + 2]});
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
    cin >> b;
    vector<vector<int>> ans = sol.divideArray(a, b);
    for (auto i : ans) {
        for (auto j : i) cout << j << " ";
        cout << '\n';
    }
    return 0;
}
