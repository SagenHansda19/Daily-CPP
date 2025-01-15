#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        vector<int> br(26);
        for(char &i : brokenLetters) br[i - 'a']++;
        int ans = 0;
        vector<string> words;
        string w = "";
        int m = text.length();
        for(int i = 0; i < m; i++) {
            if(text[i] == ' ') {
                words.push_back(w);
                w = "";
            }
            else if(i + 1 == m) {
                w += text[m - 1];
                words.push_back(w);
            }
            else w += text[i];
        }
        // for(string &i : words) cout << i << " ";
        // cout << '\n';
        int n = words.size();
        for(string &i : words) {
            bool can = true;
            for(char &j : i) {
                if(br[j - 'a'] == 1) {
                    can = false;
                    break;
                } 
            }
            if(can) ans++;
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    string a, b;
    cin.ignore();
    getline(cin, a);
    cin >> b;
    cout << sol.canBeTypedWords(a, b);
    cout << '\n';
    return 0;   
}

