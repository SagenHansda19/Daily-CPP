#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
     int takeCharacters(string s, int k) {
          vector<int> fr(3, 0);
          for(char c : s) fr[c - 'a']++;
          if(*min_element(begin(fr), end(fr)) < k) return -1;
          int ans = INT_MAX;
          int l = 0, n = s.length();
          for(int i = 0; i < n; i++){
               fr[s[i] - 'a']--;
               while(*min_element(begin(fr), end(fr)) < k){
                    fr[s[l] - 'a']++;
                    l++;
               }
               ans = min(ans, n - (i - l + 1));
          }
          return ans;
     }
};

int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     Solution sol;
     string s; cin >> s;
     int k; cin >> k;
     cout << sol.takeCharacters(s, k) << endl;   
     return 0;
}