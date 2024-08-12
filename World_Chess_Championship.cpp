#include <bits/stdc++.h>
using namespace std;
#include<string>

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x;
	    cin>>x;
	    string res;
	    cin>>res;
	    int cr_w=0, ch_w=0, dr=0;
	    for(int i=0; i<14; i++)
	    {
	        if(res[i] == 'C')
	        {
	            cr_w++;
	        }
	        else if(res[i] == 'N')
	        {
	            ch_w++;
	        }
	        else if(res[i] == 'D')
	        {
	            dr++;
	        }
	    }
	    int cr_s = cr_w * 2 + dr * 1;
	    int ch_s = ch_w * 2 + dr * 1;
	    if(cr_s>ch_s)
	    {
	        cout<<x*60<<endl;
	    }
	    else if(cr_s == ch_s)
	    {
	        cout<<x*55<<endl;
	    }
	    else
	    {
	        cout<<x*40<<endl;
	    }
	}
	return 0;

}
