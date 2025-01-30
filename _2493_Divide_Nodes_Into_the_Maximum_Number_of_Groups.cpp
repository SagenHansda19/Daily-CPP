#include <bits/stdc++.h>
using namespace std;

class Solution {
    void connect(int a, vector<vector<int>>& graph, unordered_set<int>& comp) {
        comp.insert(a);
        for(int nei : graph[a]) {
            if(comp.count(nei) == 0) {
                connect(nei, graph, comp);            
            }
        }
    }
    int maxdepth(int start, unordered_set<int>& comp, vector<vector<int>>& graph, vector<int>& vis) {
        for(int c : comp) vis[c] = -1;
        queue<int> q;
        int depth = 1;
        q.push(start);
        vis[start] = 1;
        while(!q.empty()) {
            int cur = q.front();
            q.pop();
            for(int nei : graph[cur]) {
                if(vis[nei] == -1) {
                    vis[nei] = vis[cur] + 1;
                    depth = max(depth, vis[nei]);
                    q.push(nei);
                }
                else if(abs(vis[cur] - vis[nei]) != 1) {
                    return -1;
                }
            }
        }
        return depth;
    }
public:
    int magnificentSets(int n, vector<vector<int>>& edges) {
        vector<vector<int>> graph(n + 1);
        vector<int> vis(n + 1, -1);
        for(const auto& e : edges) {
            graph[e[0]].push_back(e[1]);
            graph[e[1]].push_back(e[0]);
        }
        int mg = 0;
        unordered_set<int> comp;
        for(int i = 1; i <= n; i++) {
            if(vis[i] != -1) continue;
            comp.clear();
            connect(i, graph, comp);
            int md = -1;
            for(int c : comp) {
                md = max(md, maxdepth(c, comp, graph, vis));
            }
            if(md == -1) return -1;
            mg += md;
        }
        return mg;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    return 0;
}

