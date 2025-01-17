#include <bits/stdc++.h>
using namespace std;

class Solution {
    int func(vector<int>& nums, int k) {
        if(k < 0) return 0;
        int l = 0, r = 0, cnt = 0, sum = 0;
        while(r < nums.size()) {
            sum += (nums[r] % 2);
            while(sum > k) {
                sum -= (nums[l] % 2);
                l++;
            }
            cnt += (r - l + 1);
            r++;
        }
        return cnt;
    }
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return (func(nums, k) - func(nums, k - 1));
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
    int k; cin >> k;
    cout << sol.numberOfSubarrays(a, k) << '\n';
    return 0;
}

