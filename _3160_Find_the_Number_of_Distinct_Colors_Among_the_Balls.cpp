#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        int n = queries.size();
        unordered_map<int, int> color, ball;
        vector<int> ans;
        for(auto i : queries) {
            if(ball.find(i[0]) != ball.end()) {
                int prev = ball[i[0]];
                color[prev]--;
                if(color[prev] == 0) color.erase(prev);
            }
            ball[i[0]] = i[1];
            color[i[1]]++;
            ans.push_back(color.size());
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int l;
    cin >> l;
    vector<vector<int>> qq;
    int val, i = 0;
    vector<int> q;
    while(cin >> val) {
        q.push_back(val);
        i++;
        if(i == 2) {
            qq.push_back(q);
            i = 0;
            q.clear();
        }
        if(cin.get() == '\n') break;
    }
    vector<int> ans = sol.queryResults(l, qq);
    for(int i : ans) cout << i << " ";
    cout << '\n';
    return 0;
}

