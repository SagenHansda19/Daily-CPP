#include <bits/stdc++.h>
using namespace std;

class Solution {
    const int mod = 1e9 + 7;
public:
    int lengthAfterTransformations(string s, int t) {
        vector<int> cc(26);
        for(char i : s) {
            cc[i - 'a']++;
        }
        for(int i = 0; i < t; i++) {
            vector<int> nc(26);
            for(int j = 0; j < 26; j++) {
                nc[(j + 1) % 26] = cc[j];
                nc[(j + 1) % 26] %= mod;
                if(j == 25) {
                    nc[1] += cc[j];
                    nc[1] %= mod;
                }
            }
            cc = nc;
        }
        int ans = 0;
        for(int i : cc) {
            ans += i;
            ans %= mod;
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    string s; cin >> s;
    int t; cin >> t;
    cout << sol.lengthAfterTransformations(s, t) << '\n';
    return 0;
}

