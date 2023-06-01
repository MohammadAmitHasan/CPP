#include <bits/stdc++.h>
using namespace std;
class Student {
   public:
    string name;
    int roll;
    int marks;
    // We do not create constructor to get array of objects
};
int main() {
    // declare an array of objects
    Student arr[3];
    for (int i = 0; i < 3; i++) {
        getline(cin, arr[i].name);
        cin >> arr[i].roll >> arr[i].marks;
        cin.ignore();
        // getchar(); for c
    }

    Student max = arr[0];
    for (int i = 0; i < 3; i++) {
        if (arr[i].marks > max.marks) {
            max = arr[i];
        }
    }
    cout << "Name: " << max.name << " " << max.marks;

    return 0;
}