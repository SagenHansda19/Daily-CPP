#include <bits/stdc++.h>
using namespace std;

void solve(){
     int n;
     string num;
     cin>>n>>num;
     vector<int> nums1, nums2;
     for(int i = 0; i < n; i++){
          nums1.push_back(num[i]);
     }
     for(int i = n; i < num.length(); i++){
          nums2.push_back(num[i]);
     }
     sort(nums1.begin(), nums1.end());
     sort(nums2.begin(), nums2.end());
     int i = 0;
     if(nums1[i] > nums2[i]){
          for(i = 1; i < n; i++){
               if(nums1[i] <= nums2[i]){
                    cout<<"NO"<<endl;
                    return;
               }
               else continue;
          }
          cout<<"YES"<<endl;
          return;
     }
     else if(nums1[i] < nums2[i]){
          for(i = 1; i < n; i++){
               if(nums1[i] >= nums2[i]){
                    cout<<"NO"<<endl;
                    return;
               }
               else continue;
          }
          cout<<"YES"<<endl;
          return;
     }
     else{
          cout<<"NO"<<endl;
          return;
     }
}

int main(){
     solve();
     return 0;
}