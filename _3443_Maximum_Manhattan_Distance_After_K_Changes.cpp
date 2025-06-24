#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

class Solution {
   public:
    int maxDistance(string s, int k) {
        int ans = 0, n = 0, ss = 0, e = 0, w = 0;
        for (int i = 0; i < s.size(); i++) {
            char c = s[i];
            if (c == 'N')
                n++;
            else if (c == 'S')
                ss++;
            else if (c == 'E')
                e++;
            else if (c == 'W')
                w++;
            int x = abs(n - ss);
            int y = abs(e - w);
            int md = x + y;
            int d = md + min(2 * k, i + 1 - md);
            ans = max(ans, d);
        }
        return ans;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    string s;
    int a;
    cin >> s >> a;
    cout << sol.maxDistance(s, a) << '\n';
    return 0;
}
