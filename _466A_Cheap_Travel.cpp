#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, m, a, b;
	cin >> n >> m >> a >> b;
	int cost = 0, rides = 0;
	for(int i = 0; i < n; i++) {
		if(rides + m > n) break;
		cost += b;
		rides += m;
	}
	cost = min({cost + (n - rides) * a, cost + b, a * n});
	cout << cost << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
    