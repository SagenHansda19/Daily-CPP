#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    // Creating a phone book using a map
    map<string, string> phoneBook;

    // Input phone book entries
    for (int i = 0; i < n; ++i)
    {
        string name, phoneNumber;
        cin >> name >> phoneNumber;
        phoneBook[name] = phoneNumber;
    }

    // Query phone book entries
    string query;
    while (cin >> query)
    {
        // Search for the query name in the phone book
        auto it = phoneBook.find(query);
        if (it != phoneBook.end())
        {
            // Name found, print the corresponding phone number
            cout << it->first << "=" << it->second << endl;
        }
        else
        {
            // Name not found
            cout << "Not found" << endl;
        }
    }

    return 0;
}
