#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        int n = words.size();
        // sort(words.begin(), words.end(), []
        //     (const string& first, const string& second) {
        //         return first.size() < second.size();
        //     });
        unordered_set<string> ans;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(words[j].find(words[i]) != string::npos && i != j) ans.insert(words[i]);
            }
        }
        return vector<string>(ans.begin(), ans.end());
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<string> words;
    string s;
    while(cin >> s) {
        words.push_back(s);
        if(cin.get() == '\n') break;
    }
    vector<string> ans = sol.stringMatching(words);
    for(string& i : ans) cout << i << " "; 
    return 0;
}

