#include <bits/stdc++.h>
using namespace std;

class Solution {
    int backtrack(vector<int>& f) {
        int ans = 0;
        for(int i = 0; i < 26; i++) {
            if(f[i] > 0) {
                f[i]--;
                //         A            B
                //       A   B        A   
                //     B       A    A
                ans += 1 + backtrack(f);
                f[i]++;
            }
        }
        return ans;
    }
public:
    int numTilePossibilities(string tiles) {
        vector<int> f(26, 0);
        for(char c : tiles) f[c - 'A']++;
        return backtrack(f);
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    string s; cin >> s;
    cout << sol.numTilePossibilities(s) << '\n';
    return 0;
}

