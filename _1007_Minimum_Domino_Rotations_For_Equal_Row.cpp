#include <bits/stdc++.h>
using namespace std;

class Solution {
    int doo(vector<int>& tops, vector<int>& bottoms, int tt) {
        int tr = 0, br = 0;
        for(int i = 0; i < tops.size(); i++) {
            if(tops[i] != tt && bottoms[i] != tt) return INT_MAX;
            if(tops[i] != tt) tr++;
            if(bottoms[i] != tt) br++;
        }
        return min(tr, br);
    }
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int ans = doo(tops, bottoms, tops[0]);
        for(int i = 1; i <= 6; i++) {
            ans = min(ans, doo(tops, bottoms, i));
        }
        return (ans == INT_MAX ? -1 : ans);
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<int> a, b;
    int c;
    while(cin >> c) {
        a.push_back(c);
        if(cin.get() == '\n') break; 
    }
    while(cin >> c) {
        b.push_back(c);
        if(cin.get() == '\n') break; 
    }
    cout << sol.minDominoRotations(a, b) << '\n';
    return 0;
}

