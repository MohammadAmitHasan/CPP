#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int frq[26] = {0};
    for (int i = 0; i < n; i++) {
        char a;
        cin >> a;
        frq[a - 'a']++;
    }

    for (char i = 'a'; i < 'z'; i++) {
        if (frq[i - 'a'] > 0) {
            for (int z = 0; z < frq[i - 'a']; z++) {
                cout << i;
            }
        }
    }

    return 0;
}