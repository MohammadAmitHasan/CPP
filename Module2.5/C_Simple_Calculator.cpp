#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    long long int sum = x + y;
    __int128 mul = static_cast<__int128>(x) * y;
    long long int ded = x - y;
    cout << x << " + " << y << " = " << sum << endl;
    cout << x << " * " << y << " = " << static_cast<long long int>(mul) << std::endl;
    cout << x << " - " << y << " = " << ded << endl;
    return 0;
}