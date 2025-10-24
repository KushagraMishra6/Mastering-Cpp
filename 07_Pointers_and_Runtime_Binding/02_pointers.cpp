// Illustrating the use of pointers in C++

#include<iostream>
using namespace std;

int main(){

    int *iptr;                  // defining a pointer to an integer
    int var1 = 10, var2 = 20;

    iptr = &var1;               // assigning address of var1 to the pointer iptr
    cout<<"Address and content of var1 are "<<iptr<<" and "<<*iptr<<endl;

    iptr = &var2;               // assigning address of var2 to the pointer iptr
    cout<<"Address and content of var2 are "<<iptr<<" and "<<*iptr<<endl;

    *iptr = 90;                 // use of indirection operator * to dereference the pointer
    var1 = *iptr * 2;

    cout<<"var1 = "<<var1<<endl;
    cout<<"var2 = "<<var2<<endl;

    return 0;
}