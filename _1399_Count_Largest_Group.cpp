#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    int sumd(int n) {
        int sum = 0;
        while(n > 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }
public:
    int countLargestGroup(int n) {
        map<int, int> f;
        for(int i = 1; i <= n; i++) {
            f[sumd(i)]++;
        }
        int mx = 0;
        for(auto [i, j] : f) {
            mx = max(mx, j);
        }
        int ans = 0;
        for(auto [i, j] : f) {
            if(j == mx) ans++;
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int n;
    cin >> n;
    cout << sol.countLargestGroup(n) << '\n';
    return 0;
}

