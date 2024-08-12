#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	cin>>tc;
    while(tc --> 0)
    {
        int n;
        cin>>n;
        int max = 0;
        for (int i=0; i<n; i++)
        {
            int elem;
            cin>>elem;
            if(elem>max)
            {
                max=elem;
            }
        }
        cout<<max<<endl;        
    }
    return 0;
}
