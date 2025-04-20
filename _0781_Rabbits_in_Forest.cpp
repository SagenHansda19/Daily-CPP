#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numRabbits(vector<int>& answers) {
        map<int, int> f;
        int ans = 0;
        for(int i : answers) f[i]++;
        for(auto [i, j] : f) {
            int gs = i + 1;
            int gg = ceil((double)j / gs);
            ans += gg * gs;
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<int> a;
    int x;
    while(cin >> x) {
        a.push_back(x);
        if(cin.get() == '\n') break;
    }
    cout << sol.numRabbits(a) << '\n';
    return 0;
}

