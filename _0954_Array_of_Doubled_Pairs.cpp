#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int, int> fr;
        for(int i : arr) fr[i]++;
        sort(arr.begin(), arr.end(), [](int a, int b) {
            return abs(a) < abs(b);
        });
        for(int i : arr) {
            if(fr[i] == 0) continue;
            if(fr[2 * i] == 0) return false;
            fr[i]--;
            fr[2 * i]--; 
        }
        return true;
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
    cout << (sol.canReorderDoubled(a) ? "YES\n" : "NO\n");
    return 0;
}

