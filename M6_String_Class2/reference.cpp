#include <bits/stdc++.h>
using namespace std;

void fun(string& s) {  // send as reference
    s = "Hasan";
}

int main() {
    string s = "Amit";
    fun(s);
    cout << s;  // Hasan
    return 0;
}