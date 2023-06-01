// #include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <utility>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int maxValue = max(a, b);
    int minValue = min(a, b);
    cout << "Max value is " << maxValue << " and minimum value is " << minValue << endl;

    swap(a, b);
    cout << "a=" << a << "\nb=" << b;

    return 0;
}