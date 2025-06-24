#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
   public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int n = nums.size(), r = 0;
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (nums[i] == key) {
                int l = max(r, i - k);
                r = min(n - 1, i + k) + 1;
                for (int j = l; j < r; j++) {
                    ans.push_back(j);
                }
            }
        }
        return ans;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<int> a;
    int kk, k;
    while (cin >> k) {
        a.push_back(k);
        if (cin.get() == '\n') break;
    }
    cin >> kk >> k;
    vector<int> ans = sol.findKDistantIndices(a, kk, k);
    for (int i : ans) cout << i << " ";
    cout << '\n';
    return 0;
}
