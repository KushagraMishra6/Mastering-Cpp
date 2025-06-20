// Typecasting in C++

#include<iostream>
using namespace std;

int main(){

    int a;
    float b = 420.5;
    cout<<"int(10.4) = "<<int(10.4)<<endl;
    cout<<"int(10.99) = "<<int(10.99)<<endl;
    cout<<"b = "<<b<<endl;
    a = int(b);
    cout<<"a = int(b) = "<<a<<endl;
    b = float(a) + 1.5;
    cout<<"b = float(a) + 1.5 = "<<b<<endl;

    return 0;
}