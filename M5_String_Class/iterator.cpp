#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "Amit Hasan";
    cout << *s.begin() << " " << *(s.end() - 1) << endl;  // A n

    // for (int i = 0; i < s.size(); i++) {
    //     cout << s[i] << endl;
    // }

    // for (string::iterator it = s.begin(); it < s.end(); it++) {
    for (auto it = s.begin(); it < s.end(); it++) {  // auto will detect the iterator type and who's
        cout << *it << endl;
    }

    return 0;
}