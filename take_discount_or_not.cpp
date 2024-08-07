#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        int a[n];
        int tot1 = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            tot1+=a[i];
        }
        for (int i=0; i<n; i++)
        {
            if(a[i]>y)
            {
                a[i]-=y;
            }
            else if(a[i]<=y)
            {
                a[i]=0;
            }
        }
        int tot = x;
        for (int i=0; i<n; i++)
        {
            tot+=a[i];
        }
        cout<<x<<endl<<tot1<<endl<<tot<<endl;
        if(tot<tot1)
        {
            cout<<"COUPON"<<endl;
        }
        else
        {
            cout<<"NO COUPON"<<endl;
        }
        // your code goes here
        
    }
    return 0;

}
