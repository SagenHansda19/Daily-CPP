#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long n = nums.size();
        long long gp = 0;
        unordered_map<int, int> f;
        for(int i = 0; i < n; i++) {
            int dif = i - nums[i];
            // cout << f[dif] << '\n';
            gp += f[dif];
            f[dif]++;;
        }
        return (n * (n - 1)) / 2 - gp;
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
    cout << sol.countBadPairs(a) << '\n';
    return 0;
}

