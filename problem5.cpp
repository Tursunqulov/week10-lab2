#include <iostream>
using namespace std;

int countChar(string s, char c) {
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == c)
            count++;
        else
            count = 0;
    }
    return count;
}

int main() {
    string s; cout << "Enter a string: "; char c;
    getline(cin, s);
    cout << "Enter the charcater:"; cin >> c;
    cout << countChar(s, c);



    return 0;
}