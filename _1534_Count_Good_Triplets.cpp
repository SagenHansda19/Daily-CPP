#include <bits/stdc++.h>
using namespace std;

class Solution {
    bool is(int x, int y, int z, int a, int b, int c) {
        return abs(x - y) <= a && abs(y - z) <= b && abs(x - z) <= c;
    }
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int ans = 0, n = arr.size();
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                for(int k = j + 1; k < n; k++) {
                    if(is(arr[i], arr[j], arr[k], a, b, c)) ans++;
                }
            }
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<int> ar;
    int a, b, c;
    while(cin >> a) {
        ar.push_back(a);
        if(cin.get() == '\n') break;
    }
    cin >> a >> b >> c;
    cout << sol.countGoodTriplets(ar, a, b, c) << '\n';
    return 0;
}

