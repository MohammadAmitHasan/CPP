#include <bits/stdc++.h>
using namespace std;

int main() {
    // String is a dynamic array
    string s1;
    s1 = " Amit Hasan";
    s1 = "Muhammad Amit Hasan";
    string s2 = "Muhammad Amit Hasan";
    cout << s1 << endl;

    if (s1 == s2) {
        cout << "The strings are same";
    } else {
        cout << "The strings are not same";
    }

    return 0;
}