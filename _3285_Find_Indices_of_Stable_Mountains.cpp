#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
     vector<int> stableMountains(vector<int>& height, int threshold) {
          int n = height.size();
          vector<int> ans;
          for(int i = 0; i < n - 1; i++){
               if(height[i] > threshold){
                    ans.push_back(i + 1);
               }
          }
          return ans;
     }
};

int main(){
     Solution sol;
     vector<int> height(5);
     int threshold;
     for(int i = 0; i < 5; i++){
          cin>>height[i];
     }
     cin>>threshold;
     vector<int> ans = sol.stableMountains(height, threshold);
     for(int i : ans) cout<< i <<" ";
     cout<<endl;
     return 0;
}