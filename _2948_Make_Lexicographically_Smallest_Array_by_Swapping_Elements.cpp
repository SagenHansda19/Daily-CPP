#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
        int n = nums.size();
        if(n == 0) return {};

        vector<pair<int, int>> spair;
        for(int i = 0; i < n; i++) spair.emplace_back(nums[i], i);
        sort(spair.begin(), spair.end());

        vector<int> ans(n);
        int s = 0;
        for(int i = 0; i < n; i++) {
            if(i == n - 1 || spair[i + 1].first - spair[i].first > limit) {
                vector<int> id;
                for(int j = s; j <= i; j++) id.push_back(spair[j].second);
                sort(id.begin(), id.end());

                for(int j = 0; j < id.size(); j++) ans[id[j]] = spair[s + j].first;
                s = i + 1;
            }
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<int> a;
    int val, l;
    while(cin >> val) {
        a.push_back(val);
        if(cin.get() == '\n') break;
    }
    cin >> l;
    vector<int> ans = sol.lexicographicallySmallestArray(a, l);
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " \n"[i == ans.size() - 1];
    }
    return 0;
}

