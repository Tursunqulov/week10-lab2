#include <iostream>
#include <cctype>
using namespace std;

int lowerCaseCount(string s) {
    int count = 0;
    for (char c : s)
        if (islower(c)) count++;
    return count;
}

int upperCaseCount(string s) {
    int count = 0;
    for (char c : s)
        if (isupper(c)) count++;
    return count;
}

string change(string s) {
    string result = "";
    int lower = lowerCaseCount(s);
    int upper = upperCaseCount(s);

    if (lower >= upper) {
        for (char c : s)
            result += tolower(c);
    } else {
        for (char c : s)
            result += toupper(c);
    }
    return result;
}

int main() {
    string s;
    cout << "Enter a word: ";
    cin >> s;

    cout << change(s) << endl;
    return 0;
}
