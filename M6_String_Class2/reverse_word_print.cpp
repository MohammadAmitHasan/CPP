#include <bits/stdc++.h>
using namespace std;

void printString(stringstream &ss) {
    string word;
    if (ss >> word) {
        printString(ss);
        cout << word << endl;  // Print in reverse way
    }
}

int main() {
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    printString(ss);

    return 0;
}