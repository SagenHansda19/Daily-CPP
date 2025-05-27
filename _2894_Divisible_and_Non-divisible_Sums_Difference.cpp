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
    int differenceOfSums(int n, int m) {
        int n1 = 0, n2 = 0;
        for (int i = 1; i <= n; i++) {
            n1 += (i % m != 0 ? i : 0);
            n2 += (i % m == 0 ? i : 0);
        }
        return n1 - n2;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int n, m;
    cin >> n >> m;
    cout << sol.differenceOfSums(n, m) << '\n';
    return 0;
}
