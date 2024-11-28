#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n, m; cin >> n >> m;
	if(min(n, m) % 2 == 1) cout << "Akshat" << endl;
	else cout << "Malvika" << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
    