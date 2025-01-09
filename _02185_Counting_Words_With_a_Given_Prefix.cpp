#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int s = pref.length();
        int n = words.size();
        int ans = 0;
        for(int i = 0; i < n; i++) {
            if(words[i].substr(0, s) == pref) ans++;
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
	vector<string> words;
    string pref, val;
    while(cin >> val) {
        words.push_back(val);
        if(cin.get() == '\n') break;
    }
    cin >> pref;
    cout << sol.prefixCount(words, pref);
    return 0;
}

