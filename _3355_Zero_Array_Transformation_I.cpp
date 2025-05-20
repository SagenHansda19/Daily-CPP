#include <algorithm>
#include <cassert>
#include <climits>
#include <cmath>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
using namespace std;

class Solution {
   public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        vector<int> dd(n, 0);
        for (auto& q : queries) {
            dd[q[0]]++;
            if (q[1] + 1 < n) dd[q[1] + 1]--;
        }
        vector<int> ans(n, 0);
        int cumsum = 0;
        for (int i = 0; i < n; i++) {
            cumsum += dd[i];
            ans[i] = cumsum;
        }
        for (int i = 0; i < n; i++) {
            if (ans[i] < nums[i]) return false;
        }
        return true;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<int> a;
    vector<vector<int>> b;
    cout << (sol.isZeroArray(a, b) == true) ? "Yes\n" : "No\n";
    return 0;
}
