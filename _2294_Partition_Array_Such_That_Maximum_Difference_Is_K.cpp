#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int ans = 1, x = nums[0], n = nums.size();
        for(int i = 0; i < n; i++) {
            if(nums[i] - x > k) {
                ans++;
                x = nums[i];
            }
        }
        return ans;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<int> a;
    int b;
    while(cin >> b) {
        a.push_back(b);
        if(cin.get() == '\n') break;
    }
    cin >> b;
    cout << sol.partitionArray(a, b) << '\n';
    return 0;
}

