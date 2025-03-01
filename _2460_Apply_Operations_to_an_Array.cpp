#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n = nums.size();
        for(int i = 1; i < n; i++) {
            if(nums[i] == nums[i - 1]) {
                nums[i - 1] *= 2;
                nums[i] = 0;
            }
        }
        int nz = 0;
        for(int i = 0; i < n; i++) {
            if(nums[i] != 0) {
                nums[nz++] = nums[i];
            }
        }
        while(nz < n) {
            nums[nz++] = 0;
        }
        return nums;
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
    vector<int> ans = sol.applyOperations(a);
    int n = ans.size();
    for(int i = 0; i < n; i++) {
        cout << ans[i] << " \n"[i == n - 1];
    }
    return 0;
}

