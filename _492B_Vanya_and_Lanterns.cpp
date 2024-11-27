#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n, l; cin >> n >> l;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	sort(begin(a), end(a));
	double dif = INT_MIN;
	for(int i = 1; i < n; i++) dif = max(dif, (double)(a[i] - a[i - 1]));
	double ans = max({dif / 2.0, (double)a[0], (double)(l - a[n - 1])});
	cout << fixed << setprecision(9) << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}