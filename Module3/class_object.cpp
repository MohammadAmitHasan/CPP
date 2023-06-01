#include <bits/stdc++.h>
using namespace std;

class Student {
   public:
    int roll;
    char name[100];
    int cls;
    char section;
};

int main() {
    Student hasan;
    hasan.roll = 2;
    hasan.cls = 12;
    hasan.section = 'C';
    char nm2[100] = "Amit Hasan";
    strcpy(hasan.name, nm2);

    cout << "Name: " << hasan.name;

    return 0;
}