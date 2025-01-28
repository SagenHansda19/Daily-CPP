#include <bits/stdc++.h>
using namespace std;

class Solution {
    void dfs(int cur, vector<bool>& vis, vector<vector<int>>& rooms) {
        if(vis[cur]) return;
        vis[cur] = true;
        for(auto nei : rooms[cur]) {
            dfs(nei, vis, rooms);
        }
    }
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool> vis(n, false);  
        dfs(0, vis, rooms);
        for(int i = 0; i < n; i++) {
            if(!vis[i]) return false;
        }  
        return true;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<vector<int>> rooms = {{1}, {2}, {3}, {}};
    cout << ((sol.canVisitAllRooms(rooms)) ? "True\n" : "False\n");
    return 0;
}

