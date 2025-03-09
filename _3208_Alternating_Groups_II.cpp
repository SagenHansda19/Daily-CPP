#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        colors.insert(colors.end(), colors.begin(), colors.begin() + (k - 1));
        int ans = 0, n = colors.size();
        int l = 0, r = 0;
        while(r < n) {
            if(r > 0 && colors[r] == colors[r - 1]) l = r;
            if(r - l + 1 >= k) ans++;
            r++;
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
    cout << sol.numberOfAlternatingGroups(a, k) << '\n';
    return 0;
}

