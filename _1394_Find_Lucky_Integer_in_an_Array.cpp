#include <iostream>
#include <vector>
using namespace std;

class Solution {
   public:
    int findLucky(vector<int>& arr) {
        vector<int> f(501, 0);
        for (int i : arr) {
            f[i]++;
        }
        for (int i = 500; i > 0; i--) {
            if (i == f[i]) return i;
        }
        return -1;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<int> a;
    int b;
    while (cin >> b) {
        a.push_back(b);
        if (cin.get() == '\n') break;
    }
    cout << sol.findLucky(a) << '\n';
    return 0;
}
