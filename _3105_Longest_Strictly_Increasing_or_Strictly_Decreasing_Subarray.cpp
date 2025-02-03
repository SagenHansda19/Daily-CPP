#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        int ans = 1;
        for(int i = 1; i < n; i++) {
            int in = 1;
            if(nums[i] > nums[i - 1]) {
                for(int j = i; j < n; j++) {
                    if(nums[j] > nums[j - 1]) in++;
                    else in = 1;
                    ans = max(ans, in);
                }
            }
            else if(nums[i] < nums[i - 1]) {
                for(int j = i; j < n; j++) {
                    if(nums[j] < nums[j - 1]) in++;
                    else in = 1;
                    ans = max(ans, in);
                }
            }
            else ans = max(ans, in);
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<int> a;
    int val;
    while(cin >> val) {
        a.push_back(val);
        if(cin.get() == '\n') break;
    }
    cout << sol.longestMonotonicSubarray(a) << '\n';
    return 0;
}

