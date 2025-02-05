#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumSetSize(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        set<int> s1, s2, s;
        for(int i : nums1) {
            s1.insert(i);
            s.insert(i);
        }
        for(int i : nums2) {
            s2.insert(i);
            s.insert(i);
        } 
        return min(min(n / 2, (int)s1.size()) + min(n / 2, (int)s2.size()), (int)s.size());
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
    cout << sol.maximumSetSize(a, b) << '\n';
    return 0;
}

