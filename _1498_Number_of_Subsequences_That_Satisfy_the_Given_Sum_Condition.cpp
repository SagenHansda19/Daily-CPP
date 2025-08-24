#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    const int mod = 1e9 + 7;
    int numSubseq(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<int> pow(n, 1);
        for(int i = 1; i < n; i++) {
            pow[i] = (pow[i - 1] * 2) % mod;
        }
        int l = 0, r = n - 1, ans = 0;
        while(l <= r) {
            if(nums[l] + nums[r] <= target) {
                ans =(ans + pow[r - l]) % mod;
                ++l;
            } else {
                --r;
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
    int b;
    while(cin >> b) {
        a.push_back(b);
        if(cin.get() == '\n') break;
    }
    cin >> b;
    cout << sol.numSubseq(a, b) << '\n';
    return 0;
}

