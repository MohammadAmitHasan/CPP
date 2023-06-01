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

int main() {
    char name[100] = "Amit Hasan";
    Person *hasan = new Person(name, 5.9, 26);

    char name2[100] = "Rohan Ahmed";
    Person *rohan = new Person(name2, 5.6, 29);

    if (rohan->age > hasan->age) {
        cout << rohan->name;
    } else {
        cout << hasan->name;
    }

    return 0;
}
