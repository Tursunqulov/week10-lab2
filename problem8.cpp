#include <iostream>
#include <cctype>
using namespace std;

void countChar(const char str[], int& vowelCount, int& consonantCount) {
    vowelCount = consonantCount = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowelCount++;
            else
                consonantCount++;
        }
    }
}

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    int vowels, consonants;
    countChar(str, vowels, consonants);

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;

    return 0;
}
