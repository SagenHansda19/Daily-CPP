#include <bits/stdc++.h>
using namespace std;

class Solution {
    int check(vector<int>& bloomDay, int mid, int k) {
        int n = bloomDay.size();
        int bk = 0;
        int in = 0;
        for(int i = 0; i < n; i++) {
            if(bloomDay[i] <= mid) {
                in++;
                if(in == k) {
                    in = 0;
                    bk++;
                }
            } else in = 0;
        }
        return bk;
    }
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        if((long long)m * k > bloomDay.size()) return -1;
        int mm = *max_element(bloomDay.begin(), bloomDay.end());
        int l = 1, r = mm;
        while(l < r) {
            int mid = l + (r - l) / 2;
            if(check(bloomDay, mid, k) >= m) r = mid;
            else l = mid + 1;
        }
        return l;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<int> a;
    int val, m, k;
    while(cin >> val) {
        a.push_back(val);
        if(cin.get() == '\n') break;
    }
    cin >> m >> k;
    cout << sol.minDays(a, m, k) << '\n';
    return 0;
}

