#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int swlen = searchWord.length();
        int ans = 1;
        string temp = "";
        vector<string> words;
        for(int i = 0; i < sentence.length(); i++) {
            if(i == sentence.length() - 1 || sentence[i] == ' ') { 
                if(i == sentence.length() - 1) temp += sentence[i];
                words.push_back(temp);
                temp = "";
            }
            else temp += sentence[i];
        }
        for(string word : words) {
            if(word.length() >= swlen && word.substr(0, swlen) == searchWord) return ans; 
            ans++;
        }
        return -1;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  	Solution sol;
  	string sentence, searchWord;
  	getline(cin, sentence);
  	cin >> searchWord;
  	cout << sol.isPrefixOfWord(sentence, searchWord);
    return 0;
}
    