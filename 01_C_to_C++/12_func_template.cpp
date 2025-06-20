// Using the comcept of function templates

#include<iostream>
using namespace std;

/*
void swap(char & a, char & b){
    // Pass by reference
    char t = a;
    a = b;
    b = t;
}

void swap(int & a, int & b){
    // Pass by reference
    int t = a;
    a = b;
    b = t;
}

void swap(float & a, float & b){
    // Pass by reference
    float t = a;
    a = b;
    b = t;
}
*/

// the above three swap() functions have the same logic for swapping, such type of functions can be replaced by template function

template <class T>
void Tswap(T & x, T & y){
    T t = x;
    x = y;
    y = t;
}

int main(){

    char ch1 = 'a', ch2 = 'b';
    Tswap(ch1, ch2);
    cout<<ch1<<"  "<<ch2<<endl;

    int a = 10, b = 20;
    Tswap(a, b);
    cout<<a<<"  "<<b<<endl;

    float c = 1.5, d = 2.5;
    Tswap(c, d);
    cout<<c<<"  "<<d<<endl;

    return 0;
}