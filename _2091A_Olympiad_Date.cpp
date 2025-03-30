#include <iostream>
#include <vector>
using namespace std;

void solve() {
	int n; cin >> n;
	vector<int> a(n);
	for(int &i : a) cin >> i;
	vector<int> b(10);
	for(int i : a) {
		b[i]++;
	}
	for(int i = 0; i < n; i++) {
		b[a[i]]++;
		if(b[0] >= 3 && b[1] >= 1 && b[2] >= 2 && b[3] >= 1 && b[5] >= 1) cout << i << '\n';
	}
	cout << 0 << '\n';
}

int main() {
	int t; cin >> t;
	while(t--) solve();
	return 0;
}
