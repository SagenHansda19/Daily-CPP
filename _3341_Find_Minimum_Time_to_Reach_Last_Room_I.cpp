#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minTimeToReach(vector<vector<int>>& move) {
        int n = move.size(), m = move[0].size();
        vector<vector<bool>> vis(n, vector<bool>(m, false));
        vector<vector<int>> dirs = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
        priority_queue<vector<int>, vector<vector<int>>, greater<>> pq;
        pq.push({0, 0, 0});
        vis[0][0] = true;
        while (!pq.empty()) {
            auto cur = pq.top();
            int tt = cur[0], r = cur[1], c = cur[2];
            pq.pop();
            if (r == n - 1 && c == m - 1) return tt;
            for (auto& d : dirs) {
                int nr = r + d[0];
                int nc = c + d[1];
                if (nr >= 0 && nr < n && nc >= 0 && nc < m && !vis[nr][nc]) {
                    vis[nr][nc] = true;
                    int nt = max(tt + 1, move[nr][nc] + 1); 
                    pq.push({nt, nr, nc});
                }
            }
        }
        return -1;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<vector<int>> move;
    return 0;
}

