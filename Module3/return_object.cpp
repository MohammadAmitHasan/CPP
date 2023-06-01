#include <bits/stdc++.h>
using namespace std;

class Student {
   public:
    int roll;
    char name[100];
    int cls;
    char section;
    // Create class constructor function
    Student(int r, char s, int c, char n[]) {
        roll = r;
        section = s;
        cls = c;
        strcpy(name, n);
    }
};

Student fun() {
    char name[100] = "Muhammad Amit Hasan";
    Student hasan(29, 'B', 6, name);
    // Return value optimisation RVO. After execution the data is released but the data is returned using RVO
    return hasan;
}
int main() {
    Student hasan = fun();
    cout << hasan.name;
    return 0;
}