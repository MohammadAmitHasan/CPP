
#include <bits/stdc++.h>
using namespace std;

class Person {
   public:
    char name[100];
    float height;
    int age;
    Person(char n[100], float h, int a) {
        strcpy(name, n);
        height = h;
        age = a;
    }
};

Person give_a_person() {
    char name[100] = "Amit Hasan";
    Person hasan(name, 5.9, 26);
    return hasan;
}

int main() {
    Person hasan = give_a_person();
    cout << "Name: " << hasan.name << endl
         << "Age: " << hasan.age << endl
         << "Height: " << hasan.height;

    return 0;
}
