#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);  // Amit Hasan is looking for new job.
    // stringstream ss(s);  // This group breaks the sentence into words using spaces.

    stringstream ss;
    ss << s;  // works similarly

    string word;
    // ss >> word;
    // cout << word << endl;  // Amit
    // ss >> word;
    // cout << word << endl;  // hasan
    // ss >> word;
    // cout << word << endl;  // is
    int count = 0;

    while (ss >> word) {  // group will provide word 1 by in in word variable
        cout << word << endl;
        count++;
    }
    cout << count << endl;
    return 0;
}