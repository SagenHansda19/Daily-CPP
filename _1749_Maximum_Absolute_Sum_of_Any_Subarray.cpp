#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int pre = 0, max_pre = 0, min_pre = 0, ans = 0;
        for(int i : nums) {
            pre += i;
            ans = max(ans, abs(pre - max_pre));
            ans = max(ans, abs(pre - min_pre));

            max_pre = max(max_pre, pre);
            min_pre = min(min_pre, pre);
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
    cout << sol.maxAbsoluteSum(a) << '\n';
    return 0;
}

