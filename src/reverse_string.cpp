#include <iostream>
#include <string>
using namespace std;

/**
 * reverse input string using recursion
 */

/*
 * function to reverse string.
 */
string reverseStr(string input_str) {
    if (input_str.size() == 1) {
        return input_str;
    }

    // call myself with an argument string which is after the second characters in given argument string.
    return reverseStr(input_str.substr(1)) + input_str.substr(0,1);
}

int main() {
    cout << "input string : ";
    string input_str;
    cin >> input_str;

    string res = reverseStr(input_str);
    cout << res << endl;
}