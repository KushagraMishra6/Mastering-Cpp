// Using the concept of inline functions

// It is advisable to define functions having small function bodies as inline functions.

/* Conventional mechanism, of establishing the linkage between the function caller(calling function) and
the callee(called function) this process involves the operation of saving the actual parameters and
function return address onto the stack, followed by a call to the function. On return, the stack must be cleaned
to restore the old status. This process is costlier.*/

/* When invoking the inline function, it will be suitably replaced by the instruction(s) of the 
square(..) function body*/ 

#include<iostream>
using namespace std;

inline float square(int num){
    return num * num;
}

int main(){

    int num = 5;
    cout<<"Square of "<<num<<" is "<<square(num);

    return 0;
}