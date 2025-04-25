#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long countInterestingSubarrays(vector<int>& nums, int modulo, int k) {
        int n = nums.size();
        map<int, int> f;
        long long ans  = 0;
        int pre = 0;
        f[0] = 1;
        for(int i = 0; i < n; i++) {
            pre += nums[i] % modulo == k;
            ans += f[(pre - k + modulo) % modulo];
            f[pre % modulo]++;
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<int> a;
    int b, c;
    while(cin >> b) {
        a.push_back(b);
        if(cin.get() == '\n') break;
    }
    cin >> b >> c;
    cout << sol.countInterestingSubarrays(a, b, c) << '\n';
    return 0;
}

