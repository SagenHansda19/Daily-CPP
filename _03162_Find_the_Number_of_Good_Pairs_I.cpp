#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int count = 0;
        int n = nums1.size();
        int m = nums2.size();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(nums1[i] % (nums2[j] * k) == 0){
                    count++;
                }
            }
        }
        return count;
    }
};

int main(){
     Solution sol;
     vector<int> nums1;
     vector<int> nums2;
     int k;
     int val;
     while(cin>>val){
          nums1.push_back(val);
          if(cin.get() == '\n'){
               break;
          }
     }
     while(cin>>val){
          nums2.push_back(val);
          if(cin.get() == '\n'){
               break;
          }
     }
     cin>>k;
     cout<<sol.numberOfPairs(nums1,nums2,k)<<endl;
     return 0;
}