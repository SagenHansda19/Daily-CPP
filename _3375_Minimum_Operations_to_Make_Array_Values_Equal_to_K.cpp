#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        if(nums[0] < k) return -1;
        int ans = 0, n = nums.size();
        unordered_map<int, int> mm;
        for(int i: nums) mm[i]++;
        for(auto i : mm) ans += (i.first > k);
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
    cout << sol.minOperations(a, k) << '\n';
    return 0;
}

