#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size(), l = 0, r = 0, ans = 0;
        unordered_map<int, int> f;
        while(r < n) {
            f[fruits[r]]++;
            r++;
            if(f.size() > 2) {
                f[fruits[l]]--;
                if(f[fruits[l]] == 0) {
                    f.erase(fruits[l]);
                }
                l++;
            }
            int s = 0;
            for(auto i : f) {
                s += i.second;
            }
            ans = max(ans, s);
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
    cout << sol.totalFruit(a) << '\n';
    return 0;
}

