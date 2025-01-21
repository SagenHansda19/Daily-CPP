#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        int n = nums.size();
        vector<int> fr(201, 0);
        for(int i : nums) fr[i]++;
        // int i = 0;
        // for(int i : fr) cout << i << " ";
        int mxfr = INT_MIN;
        for(int i : fr) {
            mxfr = max(mxfr, i);
        }
        // cout << '\n' << mxfr;
        vector<vector<int>> ans(mxfr);
        for(int i = 0; i < mxfr; i++) {
            for(int j = 1; j < 201; j++) {
                if(fr[j] > 0) {
                    ans[i].push_back(j);
                    fr[j]--;
                }
            }
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
    vector<vector<int>> ans = sol.findMatrix(a);
    for(auto i : ans) {
        for(int j : i) cout << j << " ";
        cout << '\n';
    }
    return 0;
}

