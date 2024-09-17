#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
     string defangIPaddr(string address) {
          string ans;
          for(int i = 0; i < address.length(); i++){
               if(address[i] == '.'){
                    ans += "[.]";
                    continue;
               }
               ans += address[i];
          }
          return ans;
     }
};

int main(){
     Solution sol;
     string address;
     cin >> address;
     cout<<sol.defangIPaddr(address);
     return 0;
}