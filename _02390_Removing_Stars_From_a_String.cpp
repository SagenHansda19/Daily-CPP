#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeStars(string s) {
        vector<char> stk;
        int n = s.length();
        for(int i = 0; i < n; i++) {
            if(s[i] == '*') stk.pop_back();
            else stk.push_back(s[i]);
        }
        string ans = "";
        for(char  j : stk) ans += j;
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    string s; cin >> s;
    cout << sol.removeStars(s);
    cout << '\n';
    return 0;
}

