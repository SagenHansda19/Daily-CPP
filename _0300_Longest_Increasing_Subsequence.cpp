#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        set<int> ls;
        for(int n : nums) {
            auto it = ls.lower_bound(n);
            if(it == ls.end()) ls.insert(n);
            else {
                ls.erase(it);
                ls.insert(n);
            }
        }
        return ls.size();
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<int> nums;
    int val;
    while(cin >> val) {
        nums.push_back(val);
        if(cin.get() == '\n') break;
    }
    cout << sol.lengthOfLIS(nums);
    cout << '\n';
    return 0;
}

