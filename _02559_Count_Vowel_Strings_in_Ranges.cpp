#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    bool is_vow(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    bool is_good(string& s) {
        int n = s.length();
        if(n == 1 && is_vow(s.front())) return 1;
        return is_vow(s.front()) && is_vow(s.back()); 
    }
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n = words.size();
        vector<int> prefix(n, 0);
        prefix[0] = is_good(words[0]) ? 1 : 0;
        for(int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] + (is_good(words[i]) ? 1 : 0);
        }
        vector<int> ans;
        for(auto& q : queries) {
            int l = q[0], r = q[1];
            int tot = prefix[r] - (l > 0 ? prefix[l - 1] : 0);
            ans.push_back(tot);
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  	Solution sol;
  	vector<string> words = {"aba","bcb","ece","aa","e"};
  	vector<vector<int>> queries = {{0,2},{1,4},{1,1}};
  	vector<int> ans = sol.vowelStrings(words, queries);
  	for(int i : ans) cout << i << ' ';
  	cout << '\n';
    return 0;
}
    