#include <cstdio>
#include <iostream>
#include <climits>
using namespace std;
int main() {
    int a[6][6];

    // Read 2D Matrix-Array
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 6; ++j) {
            cin >> a[i][j];
        }
    }

    // Compute the sum of hourglasses
    long sum = 0, max = LONG_MIN;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (j + 2 < 6 && i + 2 < 6) {
                sum = a[i][j] + a[i][j + 1] + a[i][j + 2] + a[i + 1][j + 1] 
                + a[i + 2][j] + a[i + 2][j + 1] + a[i + 2][j + 2];
                if (sum >= max) {
                    max = sum;
                }
            }
        }
    }
    cout<<max;

    return 0;
}