#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;

    switch (a)
    {
    case 2:
        cout<<"I got 2";
        break;
    case 3:
        cout<<"I got 3";
        break;
    default:
        cout<<"Default val"<<endl;
        break;
    }

    switch (a%2)
        {
        case 0:
            cout<<"Even number";
            break;

        default:
        cout<<"Odd number";
            break;
        }

    return 0;
}