#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class Solution {
   public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        priority_queue<pair<int, int>, vector<pair<int, int>>,
                       greater<pair<int, int>>>
            pq;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            pq.push({nums[i], i});
            if (pq.size() > k) pq.pop();
        }
        vector<int> ans;
        while (!pq.empty()) {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        sort(ans.begin(), ans.end());
        for (int i = 0; i < ans.size(); i++) {
            ans[i] = nums[ans[i]];
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
    while (cin >> b) {
        a.push_back(b);
        if (cin.get() == '\n') break;
    }
    cin >> b;
    vector<int> ans = sol.maxSubsequence(a, b);
    for (int i : ans) cout << i << " ";
    cout << '\n';
    return 0;
}
