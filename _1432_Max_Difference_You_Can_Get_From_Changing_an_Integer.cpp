#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#include <vector>
using namespace std;

class Solution {
   public:
    int maxDiff(int num) {
        string nn = to_string(num);
        set<char> unn(nn.begin(), nn.end());
        int mx = num, mn = num;
        for (char c : unn) {
            for (char i = '0'; i <= '9'; i++) {
                if (nn[0] == c && i == '0') continue;
                string nnn = nn;
                replace(nnn.begin(), nnn.end(), c, i);
                int nnum = stoi(nnn);
                mx = max(mx, nnum);
                mn = min(mn, nnum);
            }
        }
        return mx - mn;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int a;
    cin >> a;
    cout << sol.maxDiff(a) << '\n';
    return 0;
}
