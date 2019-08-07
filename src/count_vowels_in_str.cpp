#include <iostream>
#include <string>
using namespace std;

/**
 * count vowels in given string.
 */

/*
 * return vowels count
 */
int getVowelsCount(string input_str) {
    int vowel_count;
    for (int i = 0; i < input_str.length(); ++i) {
        // switchでやりたいが文字列型使えない
        if (
            input_str[i] == 'a'
            || input_str[i] == 'e'
            || input_str[i] == 'i'
            || input_str[i] == 'o'
            || input_str[i] == 'u'
        ) {
            vowel_count++;
        }
    }
    return vowel_count;
}

int main() {
    cout << "input string : ";
    string input_str;
    cin >> input_str;

    int vowel_count = getVowelsCount(input_str);
    cout << "vowel_count : " << vowel_count << endl;
}

