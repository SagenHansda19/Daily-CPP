#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	vector<int> a(n); 
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int mx = *max_element(a.begin(), a.end());
	int mn = *min_element(a.begin(), a.end());
	cout << (mx - mn) * (n - 1) << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
    