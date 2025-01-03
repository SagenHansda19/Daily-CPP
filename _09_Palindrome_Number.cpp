#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
     bool isPalindrome(int x) {
          if(x < 0) return false;
          long long ulta = 0;
          long long temp = x;
          while(temp > 0){
               int digit = temp % 10;
               ulta = ulta * 10 + digit;
               temp /= 10;
          }
          return (ulta == x);
     }
};

int main(){
     Solution sol;
     int x;
     cin>>x;
     cout<<boolalpha<<sol.isPalindrome(x);
     return 0;   
}