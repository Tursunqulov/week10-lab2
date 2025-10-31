#include <iostream>
#include <set>
using namespace std;

int main() {
    string s;
    cout << "Enter uppercase string: ";
    getline(cin, s);

    set<char> letters;
    for (char c : s) {
        if (c >= 'A' && c <= 'Z')
            letters.insert(c);
    }

    cout << "Number of authentic characters: " << letters.size() << endl;
    return 0;
}
