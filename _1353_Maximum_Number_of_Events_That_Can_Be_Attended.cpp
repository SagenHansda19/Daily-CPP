#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class Solution {
   public:
    int maxEvents(vector<vector<int>>& events) {
        int n = events.size();
        int mx = 0;
        for (int i = 0; i < n; i++) {
            mx = max(mx, events[i][1]);
        }
        priority_queue<int, vector<int>, greater<>> pq;
        sort(events.begin(), events.end());
        int ans = 0;
        for (int i = 0, j = 0; i <= mx; i++) {
            while (j < n && events[j][0] <= i) {
                pq.emplace(events[j][1]);
                j++;
            }
            while (!pq.empty() && pq.top() < i) {
                pq.pop();
            }
            if (!pq.empty()) {
                pq.pop();
                ans++;
            }
        }
        return ans;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<vector<int>> a;
    int b;
    vector<int> x;
    while (cin >> b) {
        x.push_back(b);
        if (x.size() == 2) {
            a.push_back(x);
            x.clear();
        }
        if (cin.get() == '\n') break;
    }
    cout << sol.maxEvents(a) << '\n';
    return 0;
}
