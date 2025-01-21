#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumCost(int m, int n, vector<int>& hcv, vector<int>& vcv) {
        sort(hcv.rbegin(), hcv.rend());
        sort(vcv.rbegin(), vcv.rend());
        int hc = 1, vc = 1;
        int i = 0, j = 0;
        int ans = 0;
        while(i < hcv.size() && j < vcv.size()) {
            if(hcv[i] > vcv[j]) {
                ans += (vc * hcv[i]);
                hc++;
                i++;
            }
            else {
                ans += (hc * vcv[j]);
                vc++;
                j++;
            }
        }
        while(i < hcv.size()) {
            ans += (vc * hcv[i]);
            hc++;
            i++;
        }
        while(j < vcv.size()) {
            ans += (hc * vcv[j]);
            vc++;
            j++;
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<int> hcv, vcv;
    int val;
    int m, n;
    cin >> m >> n;
    while(cin >> val) {
        hcv.push_back(val);
        if(cin.get() == '\n') break;
    }
    while(cin >> val) {
        vcv.push_back(val);
        if(cin.get() == '\n') break;
    }
    cout << sol.minimumCost(m, n, hcv, vcv) << '\n';
    return 0;
}

