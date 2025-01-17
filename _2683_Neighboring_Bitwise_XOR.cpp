#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int xorsum = 0;
        for(int &i : derived) {
            xorsum ^= i;
        }
        if(xorsum == 0) return true;
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
    cout << (sol.doesValidArrayExist(a) ? "YES\n" : "NO\n");
    return 0;
}

