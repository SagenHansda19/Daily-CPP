#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
    int find(int x, vector<int>& p) {
        if (p[x] != x) {
            p[x] = find(p[x], p);
        }
        return p[x];
    }

   public:
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        vector<int> mp(26);
        for (int i = 0; i < 26; i++) {
            mp[i] = i;
        }
        int n = s1.size();
        for (int i = 0; i < n; i++) {
            int a = find(s1[i] - 'a', mp);
            int b = find(s2[i] - 'a', mp);
            int mn = min(a, b);
            int mx = max(a, b);
            mp[mx] = mn;
        }
        string ans = "";
        for (char c : baseStr) {
            ans += (char)(find(c - 'a', mp) + 'a');
        }
        return ans;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    string a, b, c;
    cin >> a >> b >> c;
    cout << sol.smallestEquivalentString(a, b, c) << '\n';
    return 0;
}
