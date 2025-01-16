#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size(), n2 = nums2.size();
        int x1 = 0, x2 = 0;
        for(int i : nums1) x1 ^= i;
        for(int i : nums2) x2 ^= i;
        int ans = 0;
        if(n1 % 2 != 0) ans ^= x2;
        if(n2 % 2 != 0) ans ^= x1;
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<int> a, b;
    int val;
    while(cin >> val) {
        a.push_back(val);
        if(cin.get() == '\n') break;
    }
    while(cin >> val) {
        b.push_back(val);
        if(cin.get() == '\n') break;
    }
    cout << sol.xorAllNums(a, b);
    cout << '\n';
    return 0;
}

