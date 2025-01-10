#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string> ans;
        vector<int> cfr(26);
        for(string &s : words2) {
            vector<int> cfr2(26, 0);
            for(char &c : s) {
                cfr2[c - 'a']++;
                cfr[c - 'a'] = max(cfr[c - 'a'], cfr2[c - 'a']);
            }
        }
        for(string &s : words1) {
            vector<int> cfr1(26);
            for(char &c : s) {
                cfr1[c - 'a']++;
            }
            // for(int &i : cfr) cout << i << " ";
            // cout << '\n';
            // for(int &i : cfr1) cout << i << " ";
            // cout << '\n' << '\n';
            bool inc = true;
            for(int i = 0; i < 26; i++) {
                if(cfr[i] > cfr1[i]){
                    inc = false;
                } 
            }
            if(inc) ans.push_back(s);
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
	vector<string> words1, words2;
    string val;
    while(cin >> val) {
        words1.push_back(val);
        if(cin.get() == '\n') break;
    }
    while(cin >> val) {
        words2.push_back(val);
        if(cin.get() == '\n') break;
    }
    vector<string> ans = sol.wordSubsets(words1, words2);
    for(string &s : ans) cout << s << " ";
    cout << '\n';
    return 0;
}

