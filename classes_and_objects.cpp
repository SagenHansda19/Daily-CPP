#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class score
{
    public:
    int n;
    int scor[][5];
    void getdata()
    {
        int i,j;
        cin>>n;
        for(i=0;i<n;i++)
        {
            for(j=0;j<5;j++)
            {
                cin>>scor[i][j];
            }
        }
    }
    void putdata()
    {
        int r=0,i,j;
        int sum[5];
        for(i=0;i<n;i++)
        {
            for(j=0;j<5;j++)
            {
                cout<<scor[i][j]<<" ";
                // sum[i]+=score[i][j];
            }
        }
        // for(i=1;i<n;i++)
        // {
        //     if(sum[0]<sum[i])
        //     {
        //         r++;
        //     }
        // }
        // cout<<r;
    }
};

int main() {
    score s;
    s.getdata();
    s.putdata();
    return 0;
}
