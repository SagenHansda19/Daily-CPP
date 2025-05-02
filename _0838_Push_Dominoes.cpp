#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string pushDominoes(string s) {
        s = 'L' + s + 'R';
        string ans;
        int j = 0;
        for(int i = 1; i < s.size(); i++) {
            if(s[i] == '.') continue;
            int dd = i - j - 1;
            if(j > 0) ans += s[j];
            if(s[j] == s[i]) ans += string(dd, s[j]);
            else if(s[j] == 'L' && s[i] == 'R') ans +=string(dd, '.');
            else ans += string(dd / 2, 'R') + string(dd % 2, '.') + string(dd / 2, 'L');
            j = i;
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    string s; cin >> s;
    cout << sol.pushDominoes(s) << '\n';
    return 0;
}

