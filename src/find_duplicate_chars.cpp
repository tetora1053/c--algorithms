#include <iostream>
#include <map>

using namespace std;

/**
 * print all duplicate characters and its count from a given string.
 */

void printDuplicateChars(string target_str) {
    map<char, int> char_cnt_mp;
    // loop for store duplicate chars and its count
    for (int i = 0; i < (int)target_str.size(); ++i) {
        if (char_cnt_mp.find(target_str[i]) == char_cnt_mp.end()) {
            char_cnt_mp[target_str[i]] = 1;
        } else {
            ++char_cnt_mp[target_str[i]];
        }
    }

    // loop for print duplicate chars and its count
    for (map<char, int>::iterator itr = char_cnt_mp.begin(); itr != char_cnt_mp.end(); ++itr) {
        cout << itr->first << " => " << itr->second << endl;
    }
}

int main() {
    cout << "input string : ";
    string input_str;
    cin >> input_str;
    printDuplicateChars(input_str);
}