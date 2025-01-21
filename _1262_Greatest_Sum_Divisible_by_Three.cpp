#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        int n = nums.size();
        int mxsm = accumulate(nums.begin(), nums.end(), 0);
        if(mxsm % 3 == 0) return mxsm;
        vector<int> rem1, rem2;
        for(int i : nums) {
            if(i % 3 == 1) rem1.push_back(i);
            else if(i % 3 == 2) rem2.push_back(i);
        }
        sort(rem1.begin(), rem1.end());
        sort(rem2.begin(), rem2.end());

        int rem = mxsm % 3;
        int op1 = INT_MAX, op2 = INT_MAX;

        if(rem == 1 && !rem1.empty()) op1 = rem1[0];
        else if(rem == 2 && !rem2.empty()) op1 = rem2[0];

        if(rem == 1 && rem2.size() >= 2) op2 = rem2[0] + rem2[1];
        else if(rem == 2 && rem1.size() >= 2) op2 = rem1[0] + rem1[1];
        int remval = min(op1, op2);
        if(remval == INT_MAX) return 0;
        return mxsm - remval;
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
    cout << sol.maxSumDivThree(a) << '\n';
    return 0;
}

