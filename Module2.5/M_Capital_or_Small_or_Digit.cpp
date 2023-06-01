#include <bits/stdc++.h>
using namespace std;

int main() {
    char x;
    cin >> x;
    int asciValue = int(x);

    if (asciValue > 47 && asciValue < 58) {
        cout << "IS DIGIT";
    } else if (asciValue > 64 && asciValue < 91) {
        cout << "ALPHA" << endl
             << "IS CAPITAL";
    } else {
        cout << "ALPHA" << endl
             << "IS SMALL";
    }

    return 0;
}