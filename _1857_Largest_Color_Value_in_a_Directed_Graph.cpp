#include <algorithm>
#include <cassert>
#include <climits>
#include <cmath>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
using namespace std;

class Solution {
    int dfs(int v, string& colors, vector<vector<int>>& adj,
            vector<vector<int>>& cnt, vector<int>& vis) {
        if (!vis[v]) {
            vis[v] = 1;
            for (int i : adj[v]) {
                if (dfs(i, colors, adj, cnt, vis) == INT_MAX) return INT_MAX;
                for (int j = 0; j < 26; j++) {
                    cnt[v][j] = max(cnt[v][j], cnt[i][j]);
                }
            }
            ++cnt[v][colors[v] - 'a'];
            vis[v] = 2;
        }
        return vis[v] == 2 ? cnt[v][colors[v] - 'a'] : INT_MAX;
    }

   public:
    int largestPathValue(string colors, vector<vector<int>>& edges) {
        int n = colors.size();
        vector<vector<int>> adj(n), cnt(n, vector<int>(26));
        vector<int> vis(n);
        for (auto i : edges) {
            adj[i[0]].push_back(i[1]);
        }
        int ans = 0;
        for (int i = 0; i < n && ans != INT_MAX; i++) {
            ans = max(ans, dfs(i, colors, adj, cnt, vis));
        }
        return ans == INT_MAX ? -1 : ans;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    return 0;
}
