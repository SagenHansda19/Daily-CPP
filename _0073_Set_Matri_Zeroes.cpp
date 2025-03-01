#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> rr, cc;
        int r = matrix.size(), c = matrix[0].size();
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                if(matrix[i][j] == 0) rr.insert(i), cc.insert(j);
            }
        }
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                if(rr.find(i) != rr.end() || cc.find(j) != cc.end()) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int r, c;
    cin >> r >> c;
    vector<vector<int>> g(r, vector<int>(c));
    for(auto i : g) {
        for(int j : i) cin >> j;
    }
    sol.setZeros(g);
    return 0;
}

