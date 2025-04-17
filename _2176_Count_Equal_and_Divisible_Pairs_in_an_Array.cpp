#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int ans = 0, n = nums.size();
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                if(nums[i] == nums[j] && (i * j) % k == 0) ans++;
            }
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<int> a;
    int k;
    while(cin >> k) {
        a.push_back(k);
        if(cin.get() == '\n') break;
    }
    cin >> k;
    cout << sol.countPairs(a, k) << '\n';
    return 0;
}

