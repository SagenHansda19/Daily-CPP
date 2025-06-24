#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
   public:
    int minimizeMax(vector<int>& nums, int p) {
        if (p == 0) return 0;
        sort(nums.begin(), nums.end());
        int n = nums.size(), l = 0, r = nums[n - 1] - nums[0];
        while (l < r) {
            int m = l + (r - l) / 2, pp = 0;
            for (int i = 1; i < n; i++) {
                if (m >= nums[i] - nums[i - 1]) {
                    pp++;
                    i++;
                }
            }
            if (pp >= p)
                r = m;
            else
                l = m + 1;
        }
        return l;
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
    cout << sol.minimizeMax(a, b) << '\n';
    return 0;
}
