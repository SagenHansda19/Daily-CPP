#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minCapability(vector<int>& nums, int k) {
        int l = 1, r = *max_element(nums.begin(), nums.end()), n = nums.size();
        while(l < r) {
            int m = l + (r - l) / 2;
            int pos = 0;
            for(int i = 0; i < n; i++) {
                if(nums[i] <= m) {
                    pos++;
                    i++;
                }
            }
            if(pos >= k) r = m;
            else l = m + 1;
        }
        return l;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<int> a;
    int val, k;
    while(cin >> val) {
        a.push_back(val);
        if(cin.get() == '\n') break;
    }
    cin >> k;
    cout << sol.minCapability(a, k) << '\n';
    return 0;
}

