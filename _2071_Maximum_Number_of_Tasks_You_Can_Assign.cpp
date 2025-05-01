#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxTaskAssign(vector<int>& tasks, vector<int>& workers, int pills, int strength) {
        int l = 0, r = min(tasks.size(), workers.size());
        sort(tasks.begin(), tasks.end());
        sort(workers.begin(), workers.end());
        while(l < r) {
            int m = (l + r + 1) / 2;
            int used = 0;
            multiset<int> free(workers.end() - m, workers.end());
            bool is = true;
            for(int i = m - 1; i >= 0; i--) {
                auto j = prev(free.end());
                if(*j < tasks[i]) {
                    j = free.lower_bound(tasks[i] - strength);
                    if(j == free.end()) {
                        is = false;
                        break;
                    }
                    ++used;
                    if(used > pills) {
                        is = false;
                        break;
                    }
                } 
                free.erase(j);
            }
            if(is) l = m;
            else r = m - 1;
        }
        return l;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<int> a, b;
    int c, d;
    while(cin >> c) {
        a.push_back(c);
        if(cin.get() == '\n') break;
    }
    while(cin >> c) {
        b.push_back(c);
        if(cin.get() == '\n') break;
    }
    cin >> c >> d;
    cout << sol.maxTaskAssign(a, b, c, d) << '\n';
    return 0;
}

