#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string clearDigits(string s) {
        int n = s.length();
        vector<char> stk;
        int i = 0;
        while(i < n) {
            if(isdigit(s[i]) && !stk.empty()) {
                stk.pop_back();
                i++;
                continue;
            }
            stk.push_back(s[i]);
            i++;
        }
        string ans = "";
        for(char i : stk) {
            ans += i;
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    string s;
    cin >> s;
    cout << sol.clearDigits(s) << '\n';
    return 0;
}

