#include <bits/stdc++.h>
using namespace std;

class Solution {
    bool ispre(unordered_map<int, vector<int>>& adj, vector<bool>& vis, int src, int target) {
        vis[src] = 1;
        if(src == target) return true;

        int ans = false;
        for(auto a : adj[src]) {
            if(!vis[a]) {
                ans = ans || ispre(adj, vis, a, target);
            }
        } 
        return ans;
    }
public:
    vector<bool> checkIfPrerequisite(int numCourses, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
        unordered_map<int, vector<int>> adj;
        for(auto edge : prerequisites) {
            adj[edge[0]].push_back(edge[1]);
        }
        vector<bool> ans;
        for(auto q : queries) {
            vector<bool> vis(numCourses, false);
            ans.push_back(ispre(adj, vis, q[0], q[1]));
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int n = 3;
    vector<vector<int>> pre = {{1, 2}, {1, 0}, {2, 0}};
    vector<vector<int>> qq = {{1, 0}, {1, 2}};
    vector<bool> ans = sol.checkIfPrerequisite(n, pre, qq);
    for(bool i : ans) {
        cout << ((i) ? "True " : "False ");
    }
    cout << '\n';
    return 0;
}

