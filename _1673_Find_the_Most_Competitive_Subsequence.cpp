#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> stk;
        for(int i = 0; i < n; i++) {
            while(!stk.empty() && nums[i] < stk.back() && stk.size() + (n - i) > k) stk.pop_back();
            if(stk.size() < k) stk.push_back(nums[i]);
        }
        return stk;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<int> a;
    int k, val;
    cin >> k;
    while(cin >> val) {
        a.push_back(val);
        if(cin.get() == '\n') break;
    }
    vector<int> ans = sol.mostCompetitive(a, k);
    for(int i = 0; i < k; i++) {
        cout << ans[i] << " \n"[i == k - 1];
    }
    return 0;
}

