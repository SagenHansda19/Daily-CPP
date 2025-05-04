#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int n = dominoes.size();
        map<set<int>, int> diddy;
        for(auto i : dominoes) {
            diddy[set<int>(i.begin(), i.end())]++;
        }
        int ans = 0;
        for(auto [i, j] : diddy) {
            ans += j * (j - 1) / 2;
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<vector<int>> a;
    return 0;
}

