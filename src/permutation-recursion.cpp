#include <iostream>
using namespace std;

/**
 * print all permutations of given string using recursion
 */

static void permutation(string perm, string word) {
	if (word == "") {
		cout << perm << endl;
	}

	for (int i = 0; i < word.length(); i++) {
		permutation(perm + word.substr(i, 1), word.substr(0, i) + word.substr(i + 1));
	}
}

int main()
{
	string arg = "abc";
	permutation("", arg);
}
