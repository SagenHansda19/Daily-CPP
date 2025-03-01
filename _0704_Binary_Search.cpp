#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int id = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        return (id < nums.size() && nums[id] == target ? id : -1);
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
    cout << sol.search(a, k) << '\n';
    return 0;
}

