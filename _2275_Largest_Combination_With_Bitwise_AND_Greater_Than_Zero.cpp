#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        vector<int> bitcnt(24, 0);
        for(int &n : candidates) {
            for(int i = 0; i < 24; i++) {
                if(n & (1 << i)) bitcnt[i]++;
            }
        }
        int ans = 0;
        for(int &i : bitcnt) {
            ans = max(ans, i);
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<int> a;
    int val;
    while(cin >> val) {
        a.push_back(val);
        if(cin.get() == '\n') break;
    }
    cout << sol.largestCombination(a);
    cout << '\n';
    return 0;
}

