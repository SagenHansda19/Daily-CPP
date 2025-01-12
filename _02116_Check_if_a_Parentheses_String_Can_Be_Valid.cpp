#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canBeValid(string s, string locked) {
        int n = s.length();
        if(n % 2 == 1) return false;
        vector<int> openb, unlock;
        for(int i = 0; i < n; i++) {
            if(locked[i] == '0') unlock.push_back(i);
            else if(s[i] == '(') openb.push_back(i);
            else {
                if(!openb.empty()) openb.pop_back();
                else if(!unlock.empty()) unlock.pop_back();
                else return false;
            }
        }
        // match rem '(' with ')'
        while(!openb.empty() && !unlock.empty() && openb.back() < unlock.back()) {
            openb.pop_back();
            unlock.pop_back();
        }
        if(!openb.empty()) return false;
        return true;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    string s, locked;
    cin >> s >> locked;
    (sol.canBeValid(s, locked)) ? cout << "YES\n" : cout << "NO\n";
    return 0;
}

