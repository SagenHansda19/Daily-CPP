#include <bits/stdc++.h>
using namespace std;

class Solution {
    int sumd(int a) {
        int sum = 0;
        while(a > 0) {
            sum += a % 10;
            a /= 10;
        }
        return sum;
    }
public:
    int maximumSum(vector<int>& nums) {
        int n = nums.size();
        // sort(nums.begin(), nums.end());
        unordered_map<int, vector<int>> sum;
        for(int i : nums) {
            sum[sumd(i)].push_back(i);
        }
        int ans = -1;
        for(auto [k, v] : sum) {
            if(v.size() > 1) {
                sort(v.rbegin(), v.rend());
                ans = max(ans, v[0] + v[1]);
            }
        }
        // for(auto i : sum) cout << i.first << " " << i.second << '\n';
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
    cout << sol.maximumSum(a) << '\n';
    return 0;
}

