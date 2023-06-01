#include <bits/stdc++.h>
using namespace std;

int *get_array() {
    int *a = new int[10];
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }
    return a;
}

int main() {
    int *a = get_array();
    for (int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }

    return 0;
}