#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int tot = accumulate(nums.begin(), nums.end(), 0);
        int target = tot - x;
        int n = nums.size();

        if(target < 0) return -1;
        if(target == 0) return n;

        int minop = INT_MAX; // minop = minimum operation
        int cs = 0, li = 0, ri = 0; // cs = current sum, li = left index, ri = right index
        while(ri < n) {
            cs += nums[ri];
            ri++;

            while(cs > target && li < n) {
                cs -= nums[li];
                li++;
            }
            if(cs == target) minop = min(minop, n - (ri - li));
        }
        return (minop == INT_MAX) ? -1 : minop;
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
    int b; cin >> b;
    cout << sol.minOperations(a, b) << '\n';
    return 0;
}

