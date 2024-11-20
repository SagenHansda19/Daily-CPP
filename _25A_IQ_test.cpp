#include <bits/stdc++.h>
using namespace std;

void solve(){
     int n; cin >> n;
     vector<int> nums(n);
     for(int i = 0; i < n; i++){
          cin >> nums[i];
     }
     for(int i = 0; i < n; i++){
          nums[i] %= 2;
     }
     int ans = 0;
     for(int i = 0; i < n - 2; i++){
          if(nums[i] != nums[i + 1]){
               if(nums[i] == nums[i + 2]) ans = i + 2;
               else if(nums[i] != nums[i + 2]) ans = i + 1;
          }
          else if(nums[i] == nums[i + 1]){
               if(nums[i] != nums[i + 2]) ans = i + 3;
               else if(nums[i] == nums[i + 2]) continue;
          }
     }
     cout << ans << endl;
}

int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     solve();
     return 0;
}