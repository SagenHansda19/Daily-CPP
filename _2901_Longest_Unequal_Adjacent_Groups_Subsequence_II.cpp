#include <bits/stdc++.h>
using namespace std;

class Solution {
    bool is(string& s1, string& s2) {
        if(s1.size() != s2.size()) return false;
        int dd = 0;
        for(int i = 0; i < s1.size(); i++) {
            dd += s1[i] != s2[i];
            if(dd > 1) return false;
        }
        return dd == 1;
    }
public:
    vector<string> getWordsInLongestSubsequence(vector<string>& words, vector<int>& groups) {
        int n = groups.size();
        vector<int> dp(n, 1);
        vector<int> prev(n, -1);
        int mm = 0;
        for(int i = 1; i < n; i++) {
            for(int j = 0; j < i; j++) {
                if(is(words[i], words[j]) == 1 && dp[j] + 1 > dp[i] && groups[i] != groups[j]) {
                    dp[i] = dp[j] + 1;
                    prev[i] = j;
                }
            }
            if(dp[i] > dp[mm]) {
                mm = i;
            }
        }
        vector<string> ans;
        for(int i = mm; i >= 0; i = prev[i]) {
            ans.emplace_back(words[i]);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<string> a;
    vector<int> b;
    return 0;
}

