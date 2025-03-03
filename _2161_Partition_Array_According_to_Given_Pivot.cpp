#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> l, r;
        for(int i : nums) {
            if(i <= pivot) l.push_back(i);
            else r.push_back(i);
        }
        int pvt = 0;
        for(int i = 0; i < l.size(); i++) {
            if(l[i] != pivot) swap(l[i], l[pvt++]);

        }
        l.insert(l.end(), r.begin(), r.end());
        return l;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<int> a;
    int val, k;
    while(cin >> val) {
        a.push_back(val);
        if(cin.get() == '\n') break;
    }
    cin >> k;
    vector<int> ans = sol.pivotArray(a, k);
    for(int i : ans) cout << i << " ";
    cout << '\n';
    return 0;
}

