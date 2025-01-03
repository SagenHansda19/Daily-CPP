#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
     long long maximumTotalSum(vector<int>& a) {
          int n = a.size();
          sort(a.begin(), a.end(), greater<int>());  
          long long sum = 0;
          int prev = INT_MAX, val;
          for(int i = 0; i < n; i++){
               val = min(prev - 1, a[i]);
               if(val <= 0) return -1;
               sum += val;
               prev = val;
          }
          return sum;
     }
};

int main(){
     Solution sol;
     vector<int> a;
     int val;
     while(cin>>val){
          if(cin.get() == '\n') break;
          a.push_back(val);
     }
     cout<<sol.maximumTotalSum(a);
}