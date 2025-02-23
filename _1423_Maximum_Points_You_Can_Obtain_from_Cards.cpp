#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int ans = 0, lsum = 0, rsum = 0, n = cardPoints.size();
        for(int i = 0; i < k; i++) {
            lsum += cardPoints[i];
        } 
        ans = lsum;
        int r = n - 1;
        for(int i = k - 1; i >= 0; i--) {
            lsum -= cardPoints[i];
            rsum += cardPoints[r];
            r--;
            ans = max(ans, lsum + rsum);
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
    cout << sol.maxScore(a, k) << '\n';
    return 0;
}

