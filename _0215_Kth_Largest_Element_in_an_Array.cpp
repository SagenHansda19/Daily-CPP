#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq;
        for(int i : nums) pq.push(i);
        for(int i = 0; i < k - 1; i++) {
            pq.pop();
        }
        return pq.top();
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
    cout << sol.findKthLargest(a, k) << '\n';
    return 0;
}

