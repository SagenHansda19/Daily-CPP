// #include <iostream>

// using namespace std;

// int main() {
//     int n, q;
//     cin >> n >> q;

//     // Create an array of pointers to store the arrays.
//     //The number of pointers allocated is determined by the value of n
//     int** arrays = new int*[n];

//     // Input the arrays
//     for (int i = 0; i < n; ++i) {
//         int k;
//         cin >> k;
//         arrays[i] = new int[k];
//         for (int j = 0; j < k; ++j) {
//             cin >> arrays[i][j];
//         }
//     }

//     // Process the queries
//     for (int i = 0; i < q; ++i) {
//         int a, b;
//         cin >> a >> b;
//         cout << arrays[a][b] << endl;
//     }

//     // Free the dynamically allocated memory
//     for (int i = 0; i < n; ++i) {
//         delete[] arrays[i];
//     }
//     delete[] arrays;

//     return 0;
// }


#include<iostream>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;//n=no of array, q=no of quaries

    int arrs[n][100];
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;//k=size of array
        for(int j=0;j<k;j++)
        {
            cin>>arrs[i][j];
        }
    }
    for(int i=0;i<q;i++)
    {
        int a,b;//a=index of array, b=index of element in the array
        cin>>a>>b;
        cout<<arrs[a][b]<<endl;
    }
    return 0;
}