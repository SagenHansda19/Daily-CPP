#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int l = 0, r = n - 1;
        unordered_set<double> ans;
        // for(int i : nums) cout << i << " ";
        // cout << '\n';
        while(l < r) {
            double avg = (double)(nums[l] + nums[r]) / 2;
            ans.insert(avg);
            l++;
            r--;
        }
        return ans.size();
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
    cout << sol.distinctAverages(a) << '\n';
    return 0;
}

