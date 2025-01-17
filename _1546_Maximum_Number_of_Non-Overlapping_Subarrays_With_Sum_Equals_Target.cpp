#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxNonOverlapping(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> done;
        done[0] = -1;
        int ans = 0, sum = 0, prev = -1;
        for(int i = 0; i < n; i++) {
            sum += nums[i];
            if(done.count(sum - target) && done[sum - target] + 1 > prev) {
                ans++;
                prev = i;
            }
            done[sum] = i;
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
    int t; cin >> t;
    cout << sol.maxNonOverlapping(a, t) << '\n';
    return 0;
}

