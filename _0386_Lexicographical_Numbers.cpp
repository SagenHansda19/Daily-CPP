#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int> ll;
        int cur = 1;
        for(int i = 0; i < n; i++) {
            ll.push_back(cur);
            if(cur * 10 <= n) {
                cur *= 10;
            } else {
                while(cur % 10 == 9 || cur >= n) {
                    cur /= 10;
                }
                cur += 1;
            }
        }
        return ll;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int a; cin >> a;
    cout << sol.lexicalOrder(a) << '\n';
    return 0;
}

