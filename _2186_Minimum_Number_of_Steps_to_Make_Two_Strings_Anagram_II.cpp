#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> f1(26, 0), f2(26, 0);
        for(char c : s) f1[c - 'a']++;
        for(char c : t) f2[c - 'a']++;
        int ans = 0;
        for(int i = 0; i < 26; i++) {
            ans += abs(f1[i] - f2[i]);
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    string s, t;
    cin >> s >> t;
    cout << sol.minSteps(s, t) << '\n';
    return 0;
}

