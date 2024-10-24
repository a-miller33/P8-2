#include <iostream>
#include <string>
using namespace std;

int countWords(string str);

int main() {
	string str;
	cout << "Enter a string: ";
	getline(cin, str);
	cout << "Word count: " << countWords(str) << endl;

	return 0;
}

int countWords(string str) {
	int count = 1;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ' ' && str[i + 1] != ' ') {
			count++;
		}
	}
	return count;
}