#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	vector<int> a(n);
	for(int &i : a) cin >> i;
	int mn = *min_element(a.begin(), a.end());
	int mx = *max_element(a.begin(), a.end());
	cout << mx - mn << '\n';
}

int main() {
	int t; cin >> t;
	while(t--) solve();
	return 0;
}