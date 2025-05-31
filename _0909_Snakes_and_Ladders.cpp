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
    pair<int, int> getCord(int v, int n) {
        int rt = (v - 1) / n;
        int rb = (n - 1) - rt;
        int col = (v - 1) % n;
        if ((n % 2 == 1 && rb % 2 == 1) || (n % 2 == 0 && rb % 2 == 0)) {
            col = (n - 1) - col;
        }
        return {rb, col};
    }

   public:
    int snakesAndLadders(vector<vector<int>>& board) {
        int n = board.size();
        int ans = 0;
        queue<int> q;
        vector<vector<bool>> vis(n, vector<bool>(n));
        vis[n - 1][0] = true;
        q.push(1);
        while (!q.empty()) {
            int nn = q.size();
            while (nn--) {
                int x = q.front();
                q.pop();
                if (x == n * n) return ans;
                for (int i = 1; i <= 6; i++) {
                    int v = x + i;
                    if (v > n * n) break;
                    pair<int, int> cord = getCord(v, n);
                    int r = cord.first;
                    int c = cord.second;
                    if (vis[r][c]) continue;
                    vis[r][c] = true;
                    if (board[r][c] == -1) {
                        q.push(v);
                    } else {
                        q.push(board[r][c]);
                    }
                }
            }
            ans++;
        }
        return -1;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
