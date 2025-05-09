#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    vector<int> a(10);
    for(int i = 0; i < 10; i++) {
        a[i] = s[i] - '0';
    }
    sort(a.begin(), a.end());
    string ans;
    for(int i = 1; i <= 10; i++){
        int need = 10 - i;
        for(int j = 0; j < (int)a.size(); j++){
            if(a[j] >= need){
                ans.push_back(char('0' + a[j]));
                a.erase(a.begin() + j);
                break;
            }
        }
    }
    cout << ans << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
