#include <algorithm>
#include <iostream>
#include <cctype>
using namespace std;

bool isPalindrome(string s) {
    for (int i = 0; i < s.length(); i++) {
        s[i] = tolower(s[i]);
    }

    string rev = s;
    reverse(rev.begin(), rev.end());

    return s == rev;
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    if (isPalindrome(s))
        cout << "Yes, it's a palindrome!";
    else
        cout << "Nope, not a palindrome!";
}
