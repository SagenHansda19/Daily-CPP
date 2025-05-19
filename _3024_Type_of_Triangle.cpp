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
    string triangleType(vector<int>& nums) {
        map<int, int> sd;
        for (int i : nums) sd[i]++;
        if (sd.size() > 1) {
            sort(nums.begin(), nums.end());
            if (nums[0] + nums[1] <= nums[2]) return "none";
        }
        if (sd.size() == 1) return "equilateral";
        if (sd.size() == 2) return "isosceles";
        return "scalene";
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
    cout << sol.triangleType(a) << '\n';
    return 0;
}
