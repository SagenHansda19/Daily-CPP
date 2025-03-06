#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int rr = n * n;
        vector<int> f(rr + 1);
        for(auto i : grid) {
            for(int j : i) {
                f[j]++;
            }
        }
        int m, d;
        for(int i = 1; i <= rr; i++) {
            if(f[i] == 0) m = i;
            if(f[i] == 2) d = i;
        }
        return {d, m};
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    return 0;
}

