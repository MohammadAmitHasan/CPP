#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "Amit Hasan";
    // Accessing using index
    cout << s[0] << endl;
    cout << s.at(0) << endl;

    cout << s[s.size() - 1] << endl;
    cout << s.back() << endl;   // last index value
    cout << s.front() << endl;  // first index value

    return 0;
}