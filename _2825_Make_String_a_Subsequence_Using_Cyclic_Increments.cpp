#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int i = 0, j = 0;
        while(j < str2.length() && i < str1.length()) {
            if(str1[i] == str2[j] || (str1[i] - 'a' + 1) % 26 + 'a' == str2[j]) j++;
            i++;
        }
        return j == str2.length();
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  	Solution sol;
  	string s1, s2;
  	cin >> s1 >> s2;
  	string ans = sol.canMakeSubsequence(s1, s2) ? "YES" : "NO";
  	cout << ans;  
    return 0;
}
    