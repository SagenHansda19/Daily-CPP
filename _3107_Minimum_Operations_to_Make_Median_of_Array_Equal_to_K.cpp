#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long minOperationsToMakeMedianK(vector<int>& nums, int k) {
        int n = nums.size();
        sort(begin(nums), end(nums));
        int mid = n / 2;
        int midelem = nums[mid];
        long long ans = abs(k - midelem);
        for(int i = 0; i < mid; i++){
            if(nums[i] > k) ans += nums[i] - k;
        }
        for(int i = mid + 1; i < n; i++){
            if(nums[i] < k) ans += k - nums[i];
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  	Solution sol;
  	vector<int> nums;
  	int val;
  	while(cin >> val){
  		nums.push_back(val);
  		if(cin.get() == '\n') break;
  	}  
  	int k; cin >> k;
  	cout << sol.minOperationsToMakeMedianK(nums, k) <<  endl;
    return 0;
}
    