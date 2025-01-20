#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxScore(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end(), greater<>());
        int ans = ((nums[0] > 0) ? 1 : 0);
        long long pre = nums[0];
        for(int i = 1; i < n; i++) {
            pre = pre + nums[i];
            //cout << pre << " ";
            if(pre > 0) ans++;
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
    cout << sol.maxScore(a) << '\n';
    return 0;
}

