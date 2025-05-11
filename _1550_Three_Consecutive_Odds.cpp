#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int o = 0;
        for(int i : arr) {
            if(i % 2 == 1) o++;
            if(i % 2 == 0) o = 0;
            if(o >= 3) return true;
        }
        return false;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<int> a;
    int b;
    while(cin >> b) {
        a.push_back(b);
        if(cin.get() == '\n') break;
    }
    cout << (sol.threeConsecutiveOdds(a) == true ? "Yes\n" : "No\n");
    return 0;
}

