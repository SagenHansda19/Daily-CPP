#include <bits/stdc++.h>
using namespace std;

class Solution {
    int cycle = -1;
    void dfs(int a, vector<bool>& vis, vector<int> adj[], vector<int>& par) {
        vis[a] = true;
        for(int nei : adj[a]) {
            if(!vis[nei]) {
                par[nei] = a;
                dfs(nei, vis, adj, par);
            }
            else if(nei != par[a] && cycle == -1) {
                cycle = nei;
                par[nei] = a;
            }
        }
    }
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        vector<bool> vis(n, false);
        vector<int> par(n, -1);
        vector<int> adj[n];
        for(auto e : edges) {
            adj[e[0] - 1].push_back(e[1] - 1);
            adj[e[1] - 1].push_back(e[0] - 1);
        }
        dfs(0, vis, adj, par);
        unordered_map<int, int> cyclenode;
        int node = cycle;
        do {
            cyclenode[node] = 1;
            node = par[node];
        } while (node != cycle);
        for(int i = edges.size() - 1; i >= 0; i--) {
            if(cyclenode[edges[i][0] - 1] && cyclenode[edges[i][1] - 1]) return edges[i];
        }
        return {};
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    return 0;
}

