#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
   public:
    int maxDifference(string s) {
        vector<int> f(26, 0);
        for (char c : s) {
            f[c - 'a']++;
        }
        int ans = INT_MIN;
        for (int i = 0; i < 26; i++) {
            for (int j = 0; j < 26; j++) {
                if (f[i] % 2 == 1 && f[j] % 2 == 0 && f[i] > 0 && f[j] > 0 &&
                    i != j)
                    ans = max(ans, f[i] - f[j]);
            }
        }
        return ans;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    string s;
    cin >> s;
    cout << sol.maxDifference(s) << '\n';
    return 0;
}
