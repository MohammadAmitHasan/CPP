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

class Bird {
   public:
    char name[100];
    char food_habit[100];

    Bird(char n[], char fh[]) {
        strcpy(name, n);
        strcpy(food_habit, fh);
    }
};

int main() {
    char name[100] = "Amit Hasan";

    Student *memory_location = new Student(5462, 'A', 12, name);

    char name[100] = "Parrot";
    char food_habit[100] = "Random";
    Bird *parrot = new Bird(name, food_habit);

    // Update
    (*memory_location).roll = 55;
    cout << "Name: " << (*memory_location).name << endl;

    // Shortcut
    memory_location->cls = 5;
    cout << "Class: " << memory_location->cls << endl;

    // Delete an object
    delete memory_location;
    cout << "Class: " << memory_location->name << endl;

    return 0;
}

// Dynamic objects can be deleted from memory. So we need to use dynamic objects when we need them.