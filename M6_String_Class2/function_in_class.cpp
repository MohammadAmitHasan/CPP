#include <bits/stdc++.h>
using namespace std;

class Person {
   public:
    string name;
    int age, num1, num2;
    Person(string name, int age, int num1, int num2) {
        (*this).name = name;
        this->age = age;
        this->num1 = num1;
        this->num2 = num2;
    }

    void printName() {
        cout << "Name is " << name << " and age is " << age << endl;
    }
    int totalNumber() {
        return num1 + num2;
    }
};

int main() {
    Person p1("Amit Hasan", 27, 93, 95);
    cout << p1.name << " " << p1.age << endl;
    p1.printName();
    int total = p1.totalNumber();
    cout << total << endl;
    return 0;
}