#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
     vector<int> arrayRankTransform(vector<int>& arr) {
          vector<int> temp = arr;
          sort(temp.begin(), temp.end());
          map<int, int> rank;
          int r = 1;
          for(int i = 0; i < temp.size(); i++){
               if(rank.find(temp[i]) == rank.end()) rank[temp[i]] = r++;
          }
          for(int i = 0; i < arr.size(); i++) arr[i] = rank[arr[i]];
          return arr;
     }
};

int main(){
     Solution sol;
     vector<int> arr = {40,10,20,30};
     vector<int> res = sol.arrayRankTransform(arr);
     cout << "[";
     for(int i=0; res.size() > 0 && i<res.size(); i++){
         cout << res[i];
         if(i != res.size()-1){
             cout << ", ";
         }
     }
     cout<<"]";
}