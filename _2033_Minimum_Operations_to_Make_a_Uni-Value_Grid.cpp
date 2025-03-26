#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int> val;
        for (const auto& r : grid) {
            for (int i : r) {
                val.push_back(i);
            }
        }
        sort(val.begin(), val.end());
        for (int i : val) {
            if (abs(i - val[0]) % x != 0) {
                return -1;
            }
        }
        int m = val[val.size() / 2];
        int ans = 0;
        for (int i : val) {
            ans += abs(i - m) / x;
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

