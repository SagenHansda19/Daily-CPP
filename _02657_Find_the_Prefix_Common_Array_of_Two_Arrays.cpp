#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        set<int> pr;
        vector<int> ans;
        int ns = 0;
        for(int i = 0; i < n; i++) {
            if(!pr.count(A[i])) pr.insert(A[i]);
            else ns++;
            if(!pr.count(B[i])) pr.insert(B[i]);
            else ns++;
            ans.push_back(ns);
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<int> a, b;
    int val;
    while(cin >> val) {
        a.push_back(val);
        if(cin.get() == '\n') break;
    }
    while(cin >> val) {
        b.push_back(val);
        if(cin.get() == '\n') break;
    }
    vector<int> ans = sol.findThePrefixCommonArray(a, b);
    for(int &i : ans) cout << i << " ";
    cout << '\n';
    return 0;
}

