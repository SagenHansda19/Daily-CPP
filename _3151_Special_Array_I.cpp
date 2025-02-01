#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n - 1; i++) {
            if(nums[i] % 2 == nums[i + 1] % 2) return false;
        }
        return true;
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
    cout << (sol.isArraySpecial(a) ? "True\n" : "False\n");
    return 0;
}

