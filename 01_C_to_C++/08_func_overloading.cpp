// Using the concept of function overloading

#include<iostream>
using namespace std;

void show(int x){
    cout<<"Integer = "<<x<<endl;
}

void show(double x){
    cout<<"Float = "<<x<<endl;
}

void show(const char *x){
    // const char* becuase it ensures that the function do not modifies the string literal
    cout<<"String = "<<x<<endl;
}

int main(){
    
    show(420);
    show(3.1452);
    show("Hello World");

    return 0;
}