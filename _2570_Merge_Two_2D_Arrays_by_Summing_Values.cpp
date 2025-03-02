#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<int> f(1001, 0);
        for(auto i : nums1) {
            f[i[0]] += i[1];
        }
        for(auto i : nums2) {
            f[i[0]] += i[1];
        }
        vector<vector<int>> ans;
        for(int i = 0; i < f.size(); i++) {
            if(f[i] > 0) ans.push_back({i, f[i]});
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;    
    return 0;
}

