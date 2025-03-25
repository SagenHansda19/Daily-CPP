#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    bool is(vector<vector<int>>& ii) {
        sort(ii.begin(), ii.end());
        int sec = 0;
        int max_end = ii[0][1];
        for(auto &i : ii) {
            int l = i[0], r = i[1];
            if(max_end <= l) sec++;
            max_end = max(max_end, r);
        }
        return sec >= 2;
    }
public:
    bool checkValidCuts(int n, vector<vector<int>>& rectangles) {
        vector<vector<int>> x, y;
        for(auto &i : rectangles) {
            x.push_back({i[0], i[2]});
            y.push_back({i[1], i[3]});
        }
        return is(x) || is(y);
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    return 0;
}

