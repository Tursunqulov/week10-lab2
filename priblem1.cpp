#include <iostream>
#include <string>
using namespace std;

void search(string s, char c) {
    for (char a : s) {
        if (a == c) {
            cout << "found" << endl;
            return;
        }
    }

    cout << "not found" << endl;
}

int main() {
    string s;
    char ch;
    cout << "Enter string: ";
    getline(cin, s);
    cout << "Enter character: ";
    cin >> ch;

    search(s, ch);

    return 0;
}
