#include <bits/stdc++.h>
using namespace std;

class Solution {
    void dfs(int node, vector<bool>& vis, vector<vector<int>>& isConnected) {
        vis[node] = true;
        for(int i = 0; i < isConnected.size(); i++) {
            if(isConnected[node][i] && !vis[i]) dfs(i, vis, isConnected);
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        int nc = 0;
        vector<bool> vis(n, false);
        for(int i = 0; i < n; i++) {
            if(!vis[i]) {
                nc++;
                dfs(i, vis, isConnected);
            }
        }
        return nc;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    return 0;
}

