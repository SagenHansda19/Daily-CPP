#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        unordered_map<int, set<int>> um;
        int n = logs.size();
        for(auto i : logs) {
            um[i[0]].insert(i[1]);
        }
        vector<int> ans(k + 1, 0);
        for(auto i : um) {
            ans[i.second.size()]++;
        }
        ans.erase(ans.begin());
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<vector<int>> a;
    int val, k;
    int i = 0;
    vector<int> b;
    while(cin >> val) {
        b.push_back(val);
        i++;
        if(i == 2) {
            a.push_back(b);
            i = 0;
            b.clear();
        }
        if(cin.get() == '\n') break;
    }
    cin >> k;
    vector<int> ans = sol.findingUsersActiveMinutes(a, k);
    int n = ans.size();
    for(int i = 0; i < n; i++) {
        cout << ans[i] << " \n"[i == n - 1];
    }
    return 0;
}

