#include <bits/stdc++.h>
using namespace std;

class Solution {
    bool dfs(int node, vector<vector<int>>& graph, vector<int>& vis, vector<bool>& safe) {
        if(vis[node] == 1) return safe[node];
        if(vis[node] == -1) return false;
        vis[node] = -1;
        safe[node] = false;
        for(int nei : graph[node]) {
            if(!dfs(nei, graph, vis, safe)) return false;
        }
        vis[node] = 1;
        safe[node] = true;
        return true;
    }
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> vis(n, 0);
        vector<bool> safe(n, false);
        vector<int> ans;
        for(int i = 0; i < n; i++) {
            dfs(i, graph, vis, safe);
        }
        for(int i = 0; i < n; i++) {
            if(safe[i]) ans.push_back(i);
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<vector<int>> grid;
    vector<int> row;
    int val;
    while (true) {
        cin >> val;
        row.push_back(val);
        if (cin.get() == '\n') {
            break;
        }
    }
    int n = row.size();
    grid.push_back(row);
    for (int i = 1; i < n; ++i) {
        vector<int> newRow;
        for (int j = 0; j < n; ++j) {
            cin >> val;
            newRow.push_back(val);
        }
        grid.push_back(newRow);
    }
    vector<int> ans = sol.eventualSafeNodes(grid);
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " \n"[i == ans.size() - 1];
    }
    return 0;
}

