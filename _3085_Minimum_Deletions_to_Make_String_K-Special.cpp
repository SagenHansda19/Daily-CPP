#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
   public:
    int minimumDeletions(string word, int k) {
        vector<int> f(26);
        for (char c : word) f[c - 'a']++;
        int ans = word.size();
        for (int i : f) {
            int dd = 0;
            for (int j : f) {
                if (i > j)
                    dd += j;
                else if (j > i + k)
                    dd += j - (i + k);
            }
            ans = min(ans, dd);
        }
        return ans;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    string s;
    int k;
    cin >> s >> k;
    cout << sol.minimumDeletions(s, k) << '\n';
    return 0;
}
