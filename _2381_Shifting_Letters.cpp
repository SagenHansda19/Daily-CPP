class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n = s.length();
        vector<int> pre(n + 1, 0);
        
        for (auto& sh : shifts) {
            int l = sh[0], r = sh[1], dir = sh[2];
            pre[l] += dir == 1 ? 1 : -1;
            pre[r + 1] += dir == 1 ? -1 : 1;
        }
        
        for (int i = 1; i < n; i++) {
            pre[i] += pre[i - 1];
        }
        
        for (int i = 0; i < n; i++) {
            int shift = (s[i] - 'a' + pre[i]) % 26;
            if (shift < 0) shift += 26;
            s[i] = 'a' + shift;
        }
        
        return s;
    }
};