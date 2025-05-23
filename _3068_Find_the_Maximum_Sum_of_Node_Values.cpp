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
    using ll = long long;

   public:
    ll maximumValueSum(vector<int>& nums, int k, vector<vector<int>>& edges) {
        vector<vector<ll>> memo(nums.size(), vector<ll>(2, -1));
        return doo(0, 1, nums, k, memo);
    }

   private:
    long long doo(int index, int isEven, vector<int>& nums, int k,
                  vector<vector<long long>>& memo) {
        if (index == nums.size()) {
            return isEven == 1 ? 0 : INT_MIN;
        }
        if (memo[index][isEven] != -1) {
            return memo[index][isEven];
        }
        ll noXorDone = nums[index] + doo(index + 1, isEven, nums, k, memo);
        ll xorDone =
            (nums[index] ^ k) + doo(index + 1, isEven ^ 1, nums, k, memo);
        return memo[index][isEven] = max(xorDone, noXorDone);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<int> a;
    vector<vector<int>> n;
    int k;
    return 0;
}
