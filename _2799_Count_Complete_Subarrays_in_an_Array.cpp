#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_set<int> dd(nums.begin(), nums.end());
        int diddy = dd.size();
        int n = nums.size(), l = 0, r = 0, ans = 0;
        unordered_map<int, int> f;
        while(r < n) {
            f[nums[r]]++;
            while(f.size() == diddy) {
                ans += n - r;
                f[nums[l]]--;
                if(f[nums[l]] == 0) f.erase(nums[l]);
                l++;
            }
            r++;
        }
        return ans;
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
    cout << sol.countCompleteSubarrays(a) << '\n';
    return 0;
}

