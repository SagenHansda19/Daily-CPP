#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
	int t;
    cin>>t;
    while(t--){
        string s,t;
        cin>>s;
        cin>>t;
        string result = "";
        for(int i=0; i<s.length(); i++)
        {
            if(s[i] == t[i])
            {
                result += "G";
            }
            else
            {
                result += "B";
            }
        }
        cout<<result<<endl;
    }
}
