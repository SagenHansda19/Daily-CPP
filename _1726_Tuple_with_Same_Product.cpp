#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> f;
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                f[nums[i] * nums[j]]++;
            }
        }
        int ans = 0;
        for(auto &i : f) {
            int cnt = i.second;
            ans += (cnt * (cnt - 1) / 2) * 8;
        }
        return ans;
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
    cout << sol.tupleSameProduct(a) << '\n';
    return 0;
}

