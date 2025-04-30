#include <bits/stdc++.h>
using namespace std;

class Solution {
    int dd(int n) {
        string s = to_string(n);
        return s.size();
    }
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;
        for(int i : nums) {
            ans += (dd(i) % 2 == 0);
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<int> a;
    int b;
    while(cin >> b) {
        a.push_back(val);
        if(cin.get() == '\n') break;
    }
    cout << sol.findNumbers(a) << '\n';
    return 0;
}

