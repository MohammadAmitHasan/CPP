#include <bits/stdc++.h>
using namespace std;

int main() {
    string a = "amit";
    string b = "hasan";

    a += b;
    // a.append(b);        // Works same
    cout << a << endl;  // helloWorld

    a.push_back('E');   // Memory will expand and the char will be inserted in the last
    cout << a << endl;  // amithasanE

    a.pop_back();       // last char will be removed
    cout << a << endl;  // amithasan

    string s1;
    s1.assign("More_to_go_not_to_leave");  // same as s1 =
    cout << s1 << endl;                    // More

    s1.erase(2, 3);      // in the index 2, 3 char will be deleted
    cout << s1 << endl;  // Moto_go_not_to_leave
    s1.erase(2);         // in the index 2 all char will be removed
    cout << s1 << endl;  // Mo
    s1.erase();          // It will delete all the char
    cout << s1 << endl;  // blank

    string s3 = "Amit Hasan";
    s3.replace(2, 3, "ar");  // in the index 2, 2 char will be erased and given string will be inserted after the first 2 char
    cout << s3 << endl;      // AmarHasan

    s3.insert(4, "haa");  // In the 4th index the string will be inserted
    cout << s3 << endl;   // AmarhaaHasan

    return 0;
}