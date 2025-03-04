#include <bits/stdc++.h>
using namespace std;

class Solution {
    long long hr(vector<int>& piles, int a) {
        long long ans = 0;
        for(int i = 0; i < piles.size(); i++) {
            ans += (piles[i] + a - 1LL) / a;
        }   
        return ans;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int m = *max_element(piles.begin(), piles.end());
        int l = 1, r = m;
        while(l < r) {
            int mid = l + (r - l) / 2;
            int tot = hr(piles, mid);
            if(tot <= h) r = mid;
            else l = mid + 1;
        }
        return l;
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
    cout << sol.minEatingSpeed(a, k) << '\n';
    return 0;
}

