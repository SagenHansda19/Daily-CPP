#include <bits/stdc++.h>
using namespace std;

class Solution {
    bool isPrefixandSuffix(string& s1, string& s2) {
        int a = s1.length(), b = s2.length();
        if(s2.substr(0, a) == s1 && s2.substr(b - a, a) == s1) return true;
        return false;
    }
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int n = words.size(), ans = 0;
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                if(isPrefixandSuffix(words[i], words[j])) ans++;
            }
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<string> words;
    string word;
    while(cin >> word) {
        words.push_back(word);
        if(cin.get() == '\n') break;
    }
    cout << sol.countPrefixSuffixPairs(words);
    return 0;
}

