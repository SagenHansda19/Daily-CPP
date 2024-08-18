class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if ((str1 + str2) != (str2 + str1)){
            return "";
        }

        int size1 = str1.length();
        int size2 = str2.length();
        string result = str1.substr(0, gcd(size1, size2));
        return result;
    }
};