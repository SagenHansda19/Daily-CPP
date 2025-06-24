#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int ans = INT_MIN, n = nums.size();
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                if(nums[i] >= nums[j]) continue;
                ans = max(ans, nums[j] - nums[i]);
            }
        }
        return (ans == INT_MIN ? -1 : ans);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<int> a;
    int b;
    while(cin >> b) {
        a.push_back(b);
        if(cin.get() == '\n') break;
    }
    cout << sol.maximumDifference(a) << '\n';
    return 0;
}

