#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
     bool isBalanced(string num) {
          int even = 0, odd = 0;
          for(int i = 0; i < num.length(); i++){
               if(i % 2 == 0) even += num[i] - '0';
               else odd += num[i] - '0';
          }
          return even == odd;
     }
};

int main(){
     Solution sol;
     string num;
     cin>>num;
     string ans = (sol.isBalanced(num) == true) ? "True" : "False";
     cout<<ans<<endl;     
}