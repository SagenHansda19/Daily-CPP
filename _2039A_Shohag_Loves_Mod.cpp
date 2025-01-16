#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    set<int> done;
    vector<int> ans;
    int id = 1;
    for(int i = 1; i <= 100 && ans.size() < n; i++) {
        int rem = i % id;
        if(done.find(rem) == done.end()) {
            done.insert(rem);
            ans.push_back(i);
            id++;
        }
    }
    for(int i : ans) cout << i << " " ;
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

