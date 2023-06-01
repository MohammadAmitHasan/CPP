#include <bits/stdc++.h>
using namespace std;

int main() {
    float *f = new float;
    delete f;

    int *a = new int[5];
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }

    // Get a new array to extend the size
    int *b = new int[10];
    for (int i = 0; i < 5; i++) {
        b[i] = a[i];
    }
    b[5] = 10;
    b[6] = 67;

    // Delete an array. If we do => delete a only the first value location will be deleted
    delete[] a;

    for (int i = 0; i < 7; i++) {
        cout << b[i] << " ";
    }
    return 0;
}