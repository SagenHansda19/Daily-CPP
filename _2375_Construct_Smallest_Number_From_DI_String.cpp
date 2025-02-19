#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string smallestNumber(string pattern) {
        int n = pattern.length();
        vector<int> stk;
        string ans = "";
        for(int i = 0; i <= n; i++) {
            stk.push_back(i + 1);
            while(!stk.empty() && (i == n || pattern[i] == 'I')) {
                ans += to_string(stk.back());
                stk.pop_back();
            }
        }
        for(char c : stk) ans += to_string(c);
        return ans; 
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    string s; cin >> s;
    cout << sol.smallestNumber(s) << '\n';
    return 0;
}

