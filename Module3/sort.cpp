#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sort (Array name + size, comparison function)
    sort(arr, arr + n, greater<int>());

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}