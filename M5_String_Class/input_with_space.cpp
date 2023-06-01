#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;
    cin.ignore();  // It will ignore 1 char input. Enter will be ignored
    // getchar();     // Will work with c
    string s;
    getline(cin, s);  // Dynamic string input with space
    cout << s << endl;
    cout << x << endl;

    return 0;
}