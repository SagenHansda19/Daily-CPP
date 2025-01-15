#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> ans;
        int n = l.size();
        for(int i = 0; i < n; i++) {
            vector<int> a = nums;
            int j = l[i], k = r[i];
            sort(a.begin() + l[i], a.begin() + r[i] + 1);
            // for(int y = j; y < k)
            int dif = a[j + 1] - a[j];
            bool ad = true;
            for(int x = j + 2; x <= k; x++) {
                if(a[x] - a[x - 1] != dif) {
                    ad = false;
                    break;
                } 
            }
            if(ad) ans.push_back(true);
            else ans.push_back(false);
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<int> nums, l, r;
    int val;
    while(cin >> val) {
        nums.push_back(val);
        if(cin.get() == '\n') break;
    }
    while(cin >> val) {
        l.push_back(val);
        if(cin.get() == '\n') break;
    }
    while(cin >> val) {
        r.push_back(val);
        if(cin.get() == '\n') break;
    }
    vector<bool> ans = sol.checkArithmeticSubarrays(nums, l, r);
    for(bool i : ans) {
        (i == true)  ? cout << "TRUE " : cout << "FALSE ";
    }
    cout << '\n';
    return 0;
}

