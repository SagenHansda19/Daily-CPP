#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        map<int, int> f;
        for(int i : nums) f[i]++;
        int ans = 0;
        for(auto &[i, j] : f) {
            if(i * 2 == k) {
                ans += j / 2;
                j = 0;
            }
             else if(f.count(k - i)) {
                int ad = min(j, f[k - i]);
                ans += ad;
                j = 0;
                f[k - i] = 0;
            }
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
    cout << sol.maxOperations(a, k) << '\n';
    return 0;
}

