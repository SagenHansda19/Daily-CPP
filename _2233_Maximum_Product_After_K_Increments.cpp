#include <bits/stdc++.h>
using namespace std;

using ll = unsigned long long;
ll mod = 1000000007;
class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i : nums) pq.push(i);
        for(int i = 0; i < k; i++) {
            int x = pq.top();
            pq.pop();
            pq.push(x + 1);
        }
        ll ans = 1;
        while(!pq.empty()) {
            ans = (ans * pq.top()) % mod;
            pq.pop();
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
    cout << sol.maximumProduct(a, k) << '\n';
    return 0;
}

