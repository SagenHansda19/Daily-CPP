#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long s1 = 0, s2 = 0;
        long long z1 = 0, z2 = 0;
        for (int i : nums1) {
            s1 += i;
            if (i == 0) {
                s1++;
                z1++;
            }
        }
        for (int i : nums2) {
            s2 += i;
            if (i == 0) {
                s2++;
                z2++;
            }
        }
        if (!z1 && s2 > s1 || !z2 && s1 > s2) {
            return -1;
        }
        return max(s1, s2);
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    return 0;
}

