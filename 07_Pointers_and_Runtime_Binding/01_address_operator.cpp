// Illustrating the use of address operator &(ampersand) to get the address of a variable

#include<iostream>
using namespace std;

int main(){

    // Initializing three integer variables
    int a = 100;
    int b = 200;
    int c = 300;

    // Printing the address and content of each variable
    cout<<"Address of a : "<<&a<<"\t Value of a : "<<a<<endl;
    cout<<"Address of b : "<<&b<<"\t Value of b : "<<b<<endl;
    cout<<"Address of c : "<<&c<<"\t Value of c : "<<c<<endl;

    return 0;
}