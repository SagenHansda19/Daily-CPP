#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return 0;
        if(n == 2) return (nums[0] > nums[1] ? 0 : 1);
        if(nums[0] > nums[1]) return 0;
        if(nums[n - 1] > nums[n - 2]) return n - 1;
        int l = 1, r = n - 2;
        while(l <= r) {
            int mid = l + (r - l) / 2;
            if(nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1]) return mid;
            if(nums[mid] > nums[mid - 1]) l = mid + 1;
            else r = mid - 1;
        }
        return -1;
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
    cout << sol.findPeakElement(a) << '\n';
    return 0;
}

