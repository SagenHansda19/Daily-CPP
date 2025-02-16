#include <bits/stdc++.h>
using namespace std;

class Solution {
    bool backtrack(int i, vector<int>& ans, vector<bool>& used, int n) {
        if(i == ans.size()) return true;
        //skip already filled ones
        if(ans[i] != 0) return backtrack(i + 1, ans, used, n);
        //trying largest
        for(int num = n; num >= 1; num--) {
            //validation
            if(used[num]) continue;
            if(num > 1 && (i + num >= ans.size() || ans[i + num] != 0)) continue;
            //try descision
            used[num] = true;
            ans[i] = num;
            if(num > 1) ans[i + num] = num;
            //recursive
            if(backtrack(i + 1, ans, used, n)) return true;
            //backtrack
            used[num] = false;
            ans[i] = 0;
            if(num > 1) ans[i + num] = 0;
        }
        return false;
    }
public:
    vector<int> constructDistancedSequence(int n) {
        vector<int> ans(2 * n - 1, 0);
        vector<bool> used(n + 1, false);
        backtrack(0, ans, used, n);
        return ans; 
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int a; cin >> a;
    vector<int> ans = sol.constructDistancedSequence(a);
    int n = ans.size();
    for(int i = 0; i < n; i++) {
        cout << ans[i] << " \n"[i == n - 1];
    }
    return 0;
}

