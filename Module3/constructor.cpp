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

int main() {
    Student hasan(5462, 'A', 12, "Amit Hasan");

    cout << "Name: " << hasan.name << endl;
    cout << "Roll: " << hasan.roll << endl;
    cout << "Section: " << hasan.section << endl;
    cout << "Class: " << hasan.cls << endl;

    return 0;
}