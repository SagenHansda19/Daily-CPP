#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
     int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
          int res = 0;
          for(int i = 0; i < items.size(); i++){
               if(ruleKey == "type" && items[i][0] == ruleValue){
                    res++;
               }
               else if(ruleKey == "color" && items[i][1] == ruleValue){
                    res++;
               }
               else if(ruleKey == "name" && items[i][2] == ruleValue){
                    res++;
               }
          }
          return res;
     }
};

int main(){
     Solution sol;
     vector<vector<string>> items = {{"phone","blue","pixel"}, {"computer","silver","lenovo"}, {"phone","gold","iphone"}};
     string ruleKey = "color";
     string ruleValue = "silver";
     cout << sol.countMatches(items, ruleKey, ruleValue) << endl;
     return 0;
}