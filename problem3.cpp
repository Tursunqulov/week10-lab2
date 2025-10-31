#include <iostream>
#include <algorithm>
using namespace std;

bool isAnagram(string s1, string s2) {
    if (s1.length() != s2.length()) return false;

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    return s1 == s2;
}

int main() {
    string s1, s2;
    cout << "Please enter string 1: ";
    getline(cin, s1);
    cout << "Please enter string 2: ";
    getline(cin, s2);

    if (isAnagram(s1, s2))
        cout << "Yes, they are anagrams!" << endl;
    else
        cout << "Nope, not anagrams." << endl;

    return 0;
}
