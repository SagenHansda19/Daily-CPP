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
    int longestPalindrome(vector<string>& words) {
        map<string, int> f;
        for (string s : words) f[s]++;
        int ans = 0, tt = 0;
        for (auto [i, j] : f) {
            string x = i;
            reverse(x.begin(), x.end());
            if (i == x) {
                ans += (j / 2) * 4;
                if (j % 2) tt = 1;
            } else if (i < x && f.count(x)) {
                ans += min(j, f[x]) * 4;
            }
        }
        return ans + tt * 2;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<string> a;
    string b;
    while (cin >> b) {
        a.push_back(b);
        if (cin.get() == '\n') break;
    }
    cout << sol.longestPalindrome(a) << '\n';
    return 0;
}
