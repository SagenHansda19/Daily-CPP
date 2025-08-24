#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    using ll = long long;
    int ff(vector<int> &nums2, ll x1, ll v) {
        int n2 = nums2.size();
        int l = 0, r = n2 - 1;
        while(l <= r) {
            int m = l + (r - l) / 2;
            if((x1 >= 0 && nums2[m] * x1 <= v) || (x1 < 0 && nums2[m] * x1 > v)) {
                l = m + 1;
            } else {
                r = m - 1;
            }
        }
        return (x1 >= 0 ? l : n2 - l);
    }

    ll kthSmallestProduct(vector<int>& nums1, vector<int>& nums2, ll k) {
        int n1 = nums1.size();
        ll l = -1e10, r = 1e10;
        while(l <= r) {
            ll m = l + (r - l) / 2;
            ll cnt = 0;
            for(int i = 0; i < n1; i++) {
                cnt += ff(nums2, nums1[i], m);
            }
            if(cnt < k) {
                l = m + 1;
            } else {
                r = m - 1;
            }
        }
        return l;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<int> a, b;
    using ll = long long;
    ll k;
    int c;
    while(cin >> c) {
        a.push_back(c);
        if(cin.get() == '\n') break;
    }
    while(cin >> c) {
        b.push_back(c);
        if(cin.get() == '\n') break;
    }
    cin >> k;
    cout << sol.kthSmallestProduct(a, b, k) << '\n';
    return 0;
}

