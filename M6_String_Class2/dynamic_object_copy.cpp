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
    Person* rakib = new Person("Rakib", 27, 93, 95);
    Person* sakib = new Person("Sakib", 45, 43, 23);
    // It will replace the memory
    // rakib = sakib;
    *rakib = *sakib;  // The values of sakib is copied in rakib
    cout << rakib->name << endl;

    return 0;
}