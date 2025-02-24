#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size(), l = 0, r = 0, ans = 0;
        int z = 0;
        while(r < n) {
            if(nums[r] == 0) z++;
            r++;
            if(z > k) {
                z -= nums[l] == 0;
                l++;
            }
            ans = max(ans, r - l);
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<int> a;
    int val, k;
    while(cin >> val) {
        a.push_back(val);
        if(cin.get() == '\n') break;
    }
    cin >> k;
    cout << sol.longestOnes(a, k) << '\n';
    return 0;
}

