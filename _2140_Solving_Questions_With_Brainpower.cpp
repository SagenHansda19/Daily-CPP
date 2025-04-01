#include <bits/stdc++.h>
using namespace std;

class Solution {
    using ll = long long;
    ll again(vector<vector<int>>& qq, int pp, vector<ll>& mm) {
        if(pp >= qq.size()) return 0;
        if(mm[pp] != -1) return mm[pp];
        ll no = again(qq, pp + 1, mm);
        ll yes = qq[pp][0] + again(qq, pp + qq[pp][1] + 1, mm);
        return mm[pp] = max(no, yes);
    }
public:
    long long mostPoints(vector<vector<int>>& questions) {
        int n = questions.size();
        vector<ll> mm(n, -1);
        return again(questions, 0, mm);
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    return 0;
}

