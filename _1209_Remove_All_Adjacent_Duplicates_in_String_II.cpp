#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s, int k) {
        vector<pair<char, int>> stk;
        for(char c : s) {
            if(!stk.empty() && stk.back().first == c) {
                stk.back().second++;
                if(stk.back().second == k) {
                    stk.pop_back();
                }
            }
            else {
                stk.push_back({c, 1});
            }
        }
        string ans = "";
        while(!stk.empty()) {
            for(int i = 0; i < stk.back().second; i++) {
                ans += stk.back().first;
            }
            stk.pop_back();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    string s;
    int k;
    cin >> s >> k;
    cout << sol.removeDuplicates(s, k) << '\n';
    return 0;
}

