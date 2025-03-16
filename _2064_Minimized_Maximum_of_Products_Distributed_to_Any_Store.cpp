#include <bits/stdc++.h>
using namespace std;

class Solution {
    int store(vector<int>& qq, int prod) {
        int cnt = 0;
        for(int i : qq) {
            cnt += (i + prod - 1) / prod;
        }
        return cnt;
    }
public:
    int minimizedMaximum(int n, vector<int>& quantities) {
        int l = 1, r = *max_element(quantities.begin(), quantities.end());
        int ans = r;
        while(l < r) {
            int m = l + (r - l) / 2;
            if(store(quantities, m) <= n) {
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
    while (cin >> val) {
        a.push_back(val);
        if(cin.get() == '\n') break;
    }
    cin >> k;
    cout << sol.minimizedMaximum(k, a) << '\n';
    return 0;
}

