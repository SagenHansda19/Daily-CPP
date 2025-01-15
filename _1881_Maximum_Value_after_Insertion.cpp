#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string maxValue(string n, int x) {
        int a = n.length() - 1;
        int ans = a + 1;
        if(n[0] == '-') {
            for(int i = a; i >= 1; i--) {
                if(n[i] - '0' > x) ans = i;
            }
        }
        else {
            for(int i = a; i >= 0; i--) {
                if(n[i] - '0' < x) ans = i;
            }
        }
        n.insert(n.begin() + ans, x + '0');
        return n;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    string s; int x;
    cin >> s >> x;
    cout << sol.maxValue(s, x);
    cout << '\n';
    return 0;
}

