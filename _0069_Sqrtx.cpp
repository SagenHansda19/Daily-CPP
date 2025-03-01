#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        int l = 1, r = x;
        while(l <= r) {
            int mid = l + (r - l) / 2;
            if((long long)mid * mid == x) return mid;
            else if((long long)mid * mid > x) r = mid - 1;
            else l = mid + 1;
        }
        return round(r);
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int x; cin >> x;
    cout << sol.mySqrt(x) << '\n';
    return 0;
}

