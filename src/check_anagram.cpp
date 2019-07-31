#include <iostream>
#include <string>
using namespace std;

/**
 * check if two strings are anagram.
 */

bool isAnagram(string first, string second) {
    // if size of two strings is different, they are not anagram.
    if (first.size() != second.size()) {
        return false;
    }

    for (int i = 0; i < (int)first.size(); ++i) {
        // if a character which exists in one string doesn't exist in the other, not anagram.
        if (second.find(first[i]) == -1) {
            return false;
        }

        // if exists, remove that char from the second string.
        second.erase(second.begin() + second.find(first[i]));
    }

    // if the second string is empty, two strings are anagram.
    return second.empty();
}

int main() {
    cout << "input the first word : ";
    string first, second;
    cin >> first;
    cout << "input the second word : ";
    cin >> second;

    bool res = isAnagram(first, second);

    cout << "\"" + first + "\" and \"" + second + "\" are ";
    if (res)
        cout << "anagram!" << endl;
    else
        cout << "not anagram!" << endl;
}
