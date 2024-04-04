#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;//t=no of sting in arrat of string
    cin >> t;
    
    for (int i = 0; i < t; ++i) {
        string s;
        cin >> s;

        //Printing even-indexed characters
        for (int j = 0; j < s.length(); j += 2) {
            cout << s[j];
        }
        cout << " ";
        
        // Printing odd-indexed characters
        for (int j = 1; j < s.length(); j += 2) {
            cout << s[j];
        }
        cout << endl;
    }
    

    return 0;
}
