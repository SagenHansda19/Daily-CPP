#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxScore(string s) {
        int ans = INT_MIN;
        int n = s.length();
        int left0 = 0, tot1 = 0;
        for(char& a : s) {
            if(a == '1') tot1++;
        }
        for(int i = 0; i < n - 1; i++) {
            if(s[i] == '0') left0++;
            else tot1--;
            ans = max(ans, left0 + tot1);
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  	Solution sol;
  	string s; cin >> s;
  	cout << sol.maxScore(s);  
    return 0;
}
    