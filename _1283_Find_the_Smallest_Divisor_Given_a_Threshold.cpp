#include <bits/stdc++.h>
using namespace std;

class Solution {
    int check(vector<int>& nums, int mid) {
        int n = nums.size();
        int sum = 0;
        for(int i = 0; i < n; i++) {
            sum += (nums[i] + mid - 1) / mid;
        }
        return sum;
    }
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int mm = *max_element(nums.begin(), nums.end());
        int l = 1, r = mm;
        while(l < r) {
            int mid = l + (r - l) / 2;
            if(check(nums, mid) > threshold) l = mid + 1;
            else r = mid;
        }
        return l;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<int> a;
    int val, k;
    while(cin >> val) {
        a.push_back(val);
        if(cin.get() == '\n') break;
    }
    cin >> k;
    cout << sol.smallestDivisor(a, k) << '\n';
    return 0;
}

