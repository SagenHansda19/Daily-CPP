#include <bits/stdc++.h>
using namespace std;


// Prefix array is little slower 
class Solution1 {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size();
        vector<long long> pre(n, 0);
        pre[0] = nums[0];
        for(int i = 1; i < n; i++) {
            pre[i] = pre[i - 1] + nums[i];
        }
        int ans = 0;
        for(int i = 0; i < n - 1; i++) {
            if(pre[i] >= (pre[n - 1] - pre[i])) ans++;
        }
        return ans;
    }
};


// Prefix Sum is faster
typedef long long ll;
class Solution2 {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size();
        ll lsum = 0, rsum = 0;
        for(int &i : nums) rsum += i;
        int ans = 0;
        for(int i = 0; i < n - 1; i++) {
            lsum += nums[i];
            rsum -= nums[i];
            if(lsum >= rsum) ans++;
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution1 sol1;
    Solution2 sol2;
    vector<int> nums;
    int val;
    while(cin >> val) {
    	nums.push_back(val);
    	if(cin.get() == '\n') break;
    }
    cout << sol1.waysToSplitArray(nums) << '\n';
    cout << sol2.waysToSplitArray(nums) << '\n';
    return 0;
}
    