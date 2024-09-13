#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
     string finalString(string s) {
          string ans = "";
          for(int j = 0; j < s.length(); j++){
               if(s[j] == 'i'){
                    reverse(ans.begin(), ans.end());
               }
               else{
                    ans.push_back(s[j]);
               }
          }
          return ans;
     }
};

int main(){
     Solution sol;
     string s = "poiinter";
     cout << sol.finalString(s) << endl;
     return 0;
}