#include <bits/stdc++.h>
using namespace std;

void solve(){
	string s; cin >> s;
	string ans = "";
	int n = s.length();
	bool wub = false;
	for(int i = 0; i < n; i++){
		if(i + 3 <= n && s.substr(i, 3) == "WUB"){
			wub = true;
			i += 2;
			continue;
		}
		if(wub && ans.size()) ans += ' ';
		wub = false;
		ans += s[i];
	}
	cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}