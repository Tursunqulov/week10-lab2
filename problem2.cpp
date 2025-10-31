#include <iostream>
using namespace std;

string reverse(string s) {
    string reversed = "";
    for (int i = s.length() - 1; i >= 0; i--) {
        reversed += s[i];
    }
    return reversed;
}

int main() {
    string s;
    cout << "Please enter a string: ";
    getline(cin, s);
    cout << reverse(s);

    return 0;
}