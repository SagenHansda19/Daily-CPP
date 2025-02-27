#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        int n = arr.size();
        unordered_set<int> numSet(arr.begin(), arr.end());
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int prev = arr[j];
                int curr = arr[i] + arr[j];
                int len = 2;
                while (numSet.find(curr) != numSet.end()) {
                    int temp = curr;
                    curr += prev;
                    prev = temp;
                    ans = max(ans, ++len);
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
    vector<int> a;
    int val;
    while(cin >> val) {
        a.push_back(val);
        if(cin.get() == '\n') break;
    }
    cout << sol.lenLongestFibSubseq(a) << '\n';
    return 0;
}

