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
   public:
    int countLatticePoints(vector<vector<int>>& cc) {
        int n = cc.size();
        set<pair<int, int>> dn;
        for (int i = 0; i < n; i++) {
            int a = cc[i][0], b = cc[i][1], r = cc[i][2];
            int lx = a - r, rx = a + r;
            int ly = b - r, ry = b + r;
            for (int x = lx; x <= rx; x++) {
                for (int y = ly; y <= ry; y++) {
                    if ((x - a) * (x - a) + (y - b) * (y - b) <= (r * r)) {
                        dn.insert({x, y});
                    }
                }
            }
        }
        return dn.size();
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
