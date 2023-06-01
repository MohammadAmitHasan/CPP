#include <bits/stdc++.h>
using namespace std;
class Student {
   public:
    string name;
    int roll;
    int marks;
    // We do not create constructor to get array of objects
};

bool cmp(Student a, Student b) {
    if (a.marks < b.marks)
        return true;
    else
        return false;
}

int main() {
    // declare an array of objects
    Student arr[3];
    for (int i = 0; i < 3; i++) {
        getline(cin, arr[i].name);
        cin >> arr[i].roll >> arr[i].marks;
        cin.ignore();
        // getchar(); for c
    }

    sort(arr, arr + 3, cmp);

    for (int i = 0; i < 3; i++) {
        cout << arr[i].name << " " << arr[i].marks << endl;
    }

    return 0;
}