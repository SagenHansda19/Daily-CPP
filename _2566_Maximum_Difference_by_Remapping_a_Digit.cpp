#include <iostream>
#include <string>
using namespace std;

class Solution {
   public:
    int minMaxDifference(int num) {
        string nn = to_string(num);
        string nnn = nn;
        int n = nn.size();
        char oc_n9;
        for (int i = 0; i < n; i++) {
            if (nn[i] != '9') {
                oc_n9 = nn[i];
                break;
            }
        }
        for (int i = 0; i < n; i++) {
            if (nn[i] == oc_n9) nn[i] = '9';
        }
        for (int i = 0; i < n; i++) {
            if (nnn[i] != '0') {
                oc_n9 = nnn[i];
                break;
            }
        }
        for (int i = 0; i < n; i++) {
            if (nnn[i] == oc_n9) nnn[i] = '0';
        }
        return stoi(nn) - stoi(nnn);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int a;
    cin >> a;
    cout << sol.minMaxDifference(a) << '\n';
    return 0;
}
