#include <bits/stdc++.h>
using namespace std;

class Solution {
    bool is(vector<int>& f, int k) {
        int dist = 0;
        for(int i : f) {
            if(i != 0) dist++;
            if(dist > k) return false;
        }
        return true;
    }
    bool isless(vector<int>& f, int k) {
        int dist = 0;
        for(int i : f) {
            if(i != 0) dist++;
        }
        return dist < k;
    } 
  public:
    int longestKSubstr(string &s, int k) {
        // your code here
        vector<int> f(26, 0);
        int n = s.length(), l = 0, r = 0, ans = 0;
        while(r < n) {
            f[s[r] - 'a']++;
            r++;
            while(!is(f, k) && l < r) {
                f[s[l] - 'a']--;
                l++;
            }
            if(!isless(f, k)) ans = max(ans, r - l);
        }
        return (ans == 0 ? -1 : ans);
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    string s; cin >> s;
    int k; cin >> k;
    cout << sol.longestKSubstr(s, k) << '\n';
    return 0;
}

