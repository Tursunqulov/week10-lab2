#include <iostream>
#include <cctype>
#include <string>
using namespace std;

void count(const string &s, int counts[]) {
    for (char ch : s) {
        ch = tolower(ch);
        if (ch >= 'a' && ch <= 'z')
            counts[ch - 'a']++;
    }
}

int main() {
    string s;
    int counts[26] = {0};

    cout << "Enter a string: ";
    getline(cin, s);

    count(s, counts);

    cout << "\nLetter frequencies:\n";
    for (int i = 0; i < 26; i++) {
        if (counts[i] > 0)
            cout << char('a' + i) << ": " << counts[i] << endl;
    }

    return 0;
}
