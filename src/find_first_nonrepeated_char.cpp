#include <iostream>
#include <string>
#include <map>
using namespace std;

/**
 * print the first non repeated char in string.
 */

void printNonRepeatedChar(string input_str) {
    // make map for storing char and their appearance count.
    map<char, int> char_cnt_mp;
    for (int i = 0; i < (int)input_str.size(); ++i) {
        if (char_cnt_mp.find(input_str[i]) == char_cnt_mp.end()) {
            char_cnt_mp[input_str[i]] = 1;
        } else {
            ++char_cnt_mp[input_str[i]];
        }
    }

    // if a non repeated char exists, set this flag.
    bool ok = false;

    // loop for input string again and if the char with its count is 1 is found, print the result.
    for (int i = 0; i < (int)input_str.size(); ++i) {
        if (char_cnt_mp[input_str[i]] == 1) {
            cout << "the first non repeated char in \"" + input_str + "\" is ";
            cout << input_str[i] << endl;
            ok = true;
            break;
        }
    }
    if (ok == false) {
        cout << "non repeated char does not exist in \"" + input_str + "\"";
        cout << endl;
    }
}

int main() {
    string input_str;
    cout << "input string : " << endl;
    cin >> input_str;
    printNonRepeatedChar(input_str);
}
