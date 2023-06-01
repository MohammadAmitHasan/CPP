#include <bits/stdc++.h>
using namespace std;

int main() {
    string s("Hello world");  // Declare string using constructor
    cout << s << endl;
    string s1("Hello world", 5);
    cout << s1 << endl;  // Will print before the index 5 "Hello"
    string s2 = "Amit Hasan";
    string s3(s2, 5);
    cout << s3 << endl;  // Will print from the index 5 "Hasan"
    string s4(5, 'a');
    cout << s4 << endl;  // aaaaa
    return 0;
}