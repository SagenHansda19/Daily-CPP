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
    vector<vector<int>> make_adj(vector<vector<int>>& edge) {
        vector<vector<int>> adj(edge.size() + 1);
        for (auto i : edge) {
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        return adj;
    }

    int dfs(vector<vector<int>>& adj, int u, int p, int k) {
        if (k < 0) return 0;
        int cnt = 1;
        for (int v : adj[u]) {
            if (v != p) cnt += dfs(adj, v, u, k - 1);
        }
        return cnt;
    }

   public:
    vector<int> maxTargetNodes(vector<vector<int>>& edges1,
                               vector<vector<int>>& edges2, int k) {
        vector<vector<int>> adj1 = make_adj(edges1), adj2 = make_adj(edges2);
        int n = adj1.size(), m = adj2.size(), mxb = 0;
        vector<int> ans(n);
        for (int i = 0; i < m; i++) {
            mxb = max(mxb, dfs(adj2, i, -1, k - 1));
        }
        for (int i = 0; i < n; i++) {
            ans[i] = dfs(adj1, i, -1, k) + mxb;
        }
        return ans;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
