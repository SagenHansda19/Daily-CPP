#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_set<int> ss;
        int j = 0, n = nums.size();
        int ans = n;
        for(int i = n - 1; i >= 0; i--) {
            ss.insert(nums[i]);
            j++;
            if(ss.size() != j) {
                --j;
                break;
            }
        }
        ans -= j;
        return (ans + 2) / 3;
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
    cout << sol.minimumOperations(a) << '\n';
    return 0;
}

