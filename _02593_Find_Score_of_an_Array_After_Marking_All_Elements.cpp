#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long findScore(vector<int>& nums) {
        const int n=nums.size();
        long long sum=0;
        for(int l, r=0; r<n; r+=2){
            l=r;
            while(r+1<n && nums[r]>nums[r+1]) r++;
            for(int i=r; i>=l; i-=2) sum+=nums[i];
        }
        return sum;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<int> nums;
    int val;
    while(cin >> val) {
    	nums.push_back(val);
    	if(cin.get() == '\n') break;
    }
    cout << sol.findScore(nums);
    return 0;
}
    