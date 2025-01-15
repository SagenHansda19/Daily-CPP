#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        long long ans = INT_MIN;
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                for(int k = j + 1; k < n; k++) {
                    ans = max(ans, (long long)(nums[i] - nums[j]) * nums[k]);
                }
            }
        }
        return (ans < 0) ? 0 : ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  	Solution sol;
  	vector<int> num;
  	int val;
  	while(cin >> val) {
  		nums.push_back(val);
  		if(cin.get() == '\n') break;
  	}  
  	cout << sol.maximumTripletValue(nums);
    return 0;
}
    