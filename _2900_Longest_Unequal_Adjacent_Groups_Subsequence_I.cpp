#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        vector<string> ans;
        int n = words.size();
        for(int i = 0; i < n; i++) {
            if(i == 0 || groups[i] != groups[i - 1]) ans.emplace_back(words[i]);
        }
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

