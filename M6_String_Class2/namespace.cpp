#include <bits/stdc++.h>
using namespace std;

namespace Custom1 {
int age = 27;
string name = "Hasan";
class test {
   public:
    int a;
    test(int a) {
        this->a = a;
    }
};
}  // namespace Custom1

using namespace Custom1;
int main() {
    cout << Custom1::age << endl;
    test h1(34);
    cout << h1.a << endl;
    return 0;
}