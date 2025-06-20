// Parmeter passing by value, by pointer and by reference

#include<iostream>
using namespace std;

void swapByValue(int x, int y);
void swapByPointer(int *x, int *y);
void swapByReference(int & x, int & y);

int main(){
    int x = 100, y = 200;
    cout<<"Originally\nx = "<<x<<", y = "<<y;

    swapByValue(x, y);
    cout<<"\n\nAfter swapByValue\nx = "<<x<<", y = "<<y;

    swapByPointer(&x, &y);
    cout<<"\n\nAfter swapByPointer\nx = "<<x<<", y = "<<y;

    swapByReference(x, y);
    cout<<"\n\nAfter swapByReference\nx = "<<x<<", y = "<<y;

    return 0;
}

void swapByValue(int x, int y){
    // Creates copy of Actual Parameters
    int t = x;
    x = y;
    y = t;
}
void swapByPointer(int *x, int *y){
    // Directly affects the Actual Parameters
    int t = *x;
    *x = *y;
    *y = t;
}
void swapByReference(int & x, int & y){
    /* Reference variables are bound to the memory of Actual Parameters and hence, any changes 
    done onto the Formal Parameters, here in function, will reflect on the Actual Parameters */
    int t = x;
    x = y;
    y = t;
}
