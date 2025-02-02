#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> maxScoreIndices(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        vector<pair<int, int>> pp(n + 1, pair<int, int>({0, 0}));
        int n0 = 1, n1 = 1;
        for(int i = 0; i < n; i++) {
            if(nums[i] == 0) {
                pp[i + 1].first += n0;
                n0++;
            }
        }
        for(int i = n - 1; i >= 0; i--) {
            if(nums[i] == 1) {
                pp[i].second += n1;
                n1++;
            }
        }
        vector<pair<int, int>> score;
        int mx = INT_MIN;
        for(int i = 0; i <= n; i++) {
            int sc = pp[i].first + pp[i].second;
            mx = max(mx, sc);
            score.push_back({sc, i});
        }
        for(int i = 0; i < score.size(); i++) {
            if(score[i].first == mx) ans.push_back(score[i].second);
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
    vector<int> ans = sol.maxScoreIndices(a);
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " \n"[i == ans.size() - 1];
    }
    return 0;
}

