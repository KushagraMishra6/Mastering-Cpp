// Function with variable number of arguments

#include<iostream>
#include<stdarg.h>
using namespace std;

// definition of variadic function
int add(int argCount, ...){             
    // takes one fixed argument "argCount" which indicates the number of arguments in arguments list
    // ... represent the variable arguments list

    int num, result;
    va_list args;               // <-- creates a pointer variable named args

    va_start(args, argCount);       // <-- links the pointer to the variable arguments

    result = 0;
    for(int i=0; i<argCount; i++){

        num = va_arg(args, int);    // <-- accesses the argument of type integer and assigns to the variable num. Later, args is updated to point to the next argument.
        
        result += num;
    }
    va_end(args);               // <-- indicates the end of access to variable arguments using args

    return result;
}

int main(){
    int sum1, sum2, sum3;
    
    sum1 = add(3, 1, 2, 3);         // <-- first argument is a known argument indicating the number of variable arguments.
    cout<<"sum1 = "<<sum1<<'\n';

    sum2 = add(1, 10);
    cout<<"sum2 = "<<sum2<<'\n';

    sum3 = add(0);
    cout<<"sum3 = "<<sum3<<'\n';

    return 0;
}