#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1 = "Hasan";

    // String is a class. We can access methods using .
    // String length
    cout << s1.size() << endl;

    // maximum length allowed
    cout << s1.max_size() << endl;  // Varies with os, memory size

    // capacity of the object is dynamic. When we increase the string length capacity increases automatically
    cout << s1.capacity() << endl;

    // Clear function clears the string from variable
    s1.clear();
    cout << s1 << endl;

    // Empty gives boolean true / false. It checks the length
    cout << s1.empty() << endl;  // 1

    string s;
    cin >> s;                  // Taking_input
    cout << s.size() << endl;  // 12
    s.resize(5);
    cout << s << endl;  // It will resize the string in 5
    s.resize(8, 'X');   // The size is now 5. So making 8 will provide garbage value. , 'X' will replace it
    cout << s << endl;  // TakinXXX
    return 0;
}