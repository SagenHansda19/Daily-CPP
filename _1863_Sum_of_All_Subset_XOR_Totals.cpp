#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    int dfs(vector<int>& a, int i, int tot) {
        if(i == a.size()) return tot;
        int take = dfs(a, i + 1, tot ^ a[i]); 
        int no = dfs(a, i + 1, tot);
        return take + no;
    }
public:
    int subsetXORSum(vector<int>& nums) {
        return dfs(nums, 0, 0);
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
    cout << sol.subsetXORSum(a) << '\n';
    return 0;
}

