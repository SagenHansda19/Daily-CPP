#include <bits/stdc++.h>
using namespace std;

using ll = long long;
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<ll, vector<ll>, greater<ll>> pq;
        int n = nums.size();
        if(n < 2) return -1;
        for(int i : nums) {
            pq.push((ll)i);
        }
        int ans = 0;
        while(pq.top() < k) {
            ll a = pq.top();
            pq.pop();
            ll b = pq.top();
            pq.pop();
            ll ad = min(a, b) * 2 + max(a, b);
            ans++;
            pq.push(ad);
        }
        return ans;
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
    cout << sol.minOperations(a, k) << '\n';
    return 0;
}

