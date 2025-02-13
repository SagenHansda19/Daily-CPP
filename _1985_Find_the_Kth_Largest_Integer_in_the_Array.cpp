#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end(),[](string &a, string &b) {
            if(a.size() == b.size()) return a < b;
            return a.size() < b.size();
        });
        return nums[n - k];
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<string> a;
    string val;
    int k;
    while(cin >> val) {
        a.push_back(val);
        if(cin.get() == '\n') break;
    }
    cin >> k;
    cout << sol.kthLargestNumber(a, k) << '\n';
    return 0;
}

