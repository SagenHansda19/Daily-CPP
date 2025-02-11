#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n = s.length(), m = part.length();
        string stk;
        for(char c : s) {
            stk.push_back(c);
            if(stk.size() >= m && stk.substr(stk.size() - m, m) == part) {
                stk.resize(stk.size() - m);
            }
        }
        return stk;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    string a, b;
    cin >> a >> b;
    cout << sol.removeOccurrences(a, b) << '\n';
    return 0;
}

