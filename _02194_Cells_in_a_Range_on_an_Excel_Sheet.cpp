#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
     vector<string> cellsInRange(string s) {
          char c1 = s[0], c2 = s[3];
          int r1 = s[1], r2 = s[4];
          vector<string> ans;
          for(char i = c1; i <= c2; i++){
               for(int j = r1; j <= r2; j++){
                    string res = "";
                    res += i;
                    res += j;
                    ans.push_back(res);
               }
          }
          return ans;
     }
};

int main(){
     Solution sol;
     string s;
     cin>>s;
     vector<string> res = sol.cellsInRange(s);
     cout << "[";
     for(int i=0; res.size() > 0 && i<res.size(); i++){
         cout << res[i];
         if(i != res.size()-1){
             cout << ", ";
         }
     }
     cout<<"]";   
}