#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        vector<int> b = nums;
        sort(b.begin(), b.end());
        // bool ans = false;
        for(int i = 0; i < n; i++) {
            bool in = true;
            for(int j = 0; j < n; j++) {
                if(b[j] != nums[(j + i) % n]) {
                    in  = false;
                    break;
                }
            }
            if(in) return true;
        }
        return false;
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
    cout << (sol.check(a) ? "True\n" : "False\n");
    return 0;
}

