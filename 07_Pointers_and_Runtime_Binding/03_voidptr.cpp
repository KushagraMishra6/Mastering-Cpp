// Void pointers are pointers which don't have a data type associated with them, hence, they can hold the address of any data type.

// However, they can't be dereferenced directly without typecasting.

#include<iostream>
using namespace std;

int main(){

    int a = 10;
    float b = 8.3;

    void *vptr;             // void pointer declaration

    vptr = &a;              // void pointer holding address of integer variable
    cout<<"Value of a is : "<<*((int *)vptr)<<endl;             // typecasting void pointer to int pointer before dereferencing

    vptr = &b;              // void pointer holding address of float variable
    cout<<"Value of b is : "<<*((float *)vptr)<<endl;           // typecasting void pointer to float pointer before dereferencing

    return 0;
}