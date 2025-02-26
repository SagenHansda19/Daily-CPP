#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size(), ans = 0;
        for(int i = 0; i < n - 2; i++) {
            if(nums[i] == 0) {
                for(int j = i; j < i + 3; j++) {
                    nums[j] = (nums[j] == 0 ? 1 : 0);
                }
                ans++;
            }
        }
        for(int i : nums) {
            if(i == 0) return -1;
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
    cout << sol.minOperations(a) << '\n';
    return 0;
}

