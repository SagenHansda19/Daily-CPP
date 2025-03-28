#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	string s; cin >> s;
	cout << (s[0] != s[n - 1] ? "Yes\n" : "No\n");
}

int main() {
	int t; cin >> t;
	while(t--) solve();
	return 0;	
}
