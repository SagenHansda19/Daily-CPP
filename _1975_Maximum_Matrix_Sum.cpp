#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    ll maxMatrixSum(vector<vector<int>>& matrix) {
        int neg = 0, r = matrix.size(), c = matrix[0].size(), lowneg = INT_MAX;
        bool there_0 = false;
        ll ans = 0;
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                if(matrix[i][j] < 0) {
                    neg++;
                }
                lowneg = min(lowneg, abs(matrix[i][j]));
                if(matrix[i][j] == 0) there_0 = true;
                ans += abs(matrix[i][j]);
            }
        }
        if(there_0) return ans;
        if(neg % 2 != 0) ans -= 2 * lowneg;
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    return 0;
}

