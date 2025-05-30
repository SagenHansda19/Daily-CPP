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
    void dfs(int node, vector<int>& edges, vector<int>& dd, vector<bool>& vis) {
        vis[node] = true;
        int nei = edges[node];
        if (nei != -1 && !vis[nei]) {
            dd[nei] = 1 + dd[node];
            dfs(nei, edges, dd, vis);
        }
    }

   public:
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        int n = edges.size();
        vector<int> dd1(n, INT_MAX), dd2(n, INT_MAX);
        vector<bool> vis1(n), vis2(n);
        dd1[node1] = 0, dd2[node2] = 0;
        dfs(node1, edges, dd1, vis1);
        dfs(node2, edges, dd2, vis2);
        int ans = -1, cur = INT_MAX;
        for (int i = 0; i < n; i++) {
            if (cur > max(dd1[i], dd2[i])) {
                ans = i;
                cur = max(dd1[i], dd2[i]);
            }
        }
        return ans;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<int> a;
    int b, c;
    while (cin >> b) {
        a.push_back(b);
        if (cin.get() == '\n') break;
    }
    cin >> b >> c;
    cout << sol.closestMeetingNode(a, b, c) << '\n';
    return 0;
}
