#include <bits/stdc++.h>
using namespace std;

class Solution {
    int dd(vector<int>& ww, int mid) {
        int days = 1, w = 0, i = 0, n = ww.size();
        while(i < n) {
            if(w + ww[i] <= mid) {
                w += ww[i];
            } else {
                days++;
                w = ww[i];
            }
            i++;
        }
        return days;
    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int l = *max_element(weights.begin(), weights.end());
        int r = accumulate(weights.begin(), weights.end(), 0);
        int ans = r;
        while(l < r) {
            int m = l + (r - l) / 2;
            if(dd(weights, m) <= days) {
                ans = m;
                r = m;
            } else {
                l = m + 1;
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
    cout << sol.shipWithinDays(a, k) << '\n';
    return 0;
}

