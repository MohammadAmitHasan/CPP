#include<iostream>
using namespace std;
int main () {
    // Take new line
    std::cout<<"Hello world\nMore\n";
    std::cout<<"Hello world"<<std::endl;
    // Print twice
    std::cout<<"Print "<<"More\n";

    // Variable print
    // When std will be missing it will find the namespace and will use it
    int a , b, c;
    // Take input a,b,c
    cin>>a>>b>>c;
    cout<<a<<" "<<b<<" "<<c<<"\n";

    return 0;
}