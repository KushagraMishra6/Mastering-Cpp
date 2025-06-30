// Demonstrating the storage classes : auto, register, static and extern



// IMPORTANT IMPORTANT IMPORTANT : auto is no longer a storage class since C++ 11, it has now become a type specifier



/*  by default, all variables are auto.
    they are created on entering the function/block,
    and are destroyed on termination of the function/block.
    local auto variables are allocated memory on the stack.
*/


#include<iostream>
using namespace std;

extern int var;
// tells the compiler that this variable/function exists, but is defined somewhere else in some other file

void printCount(void){

    static int count = 1;
    /*  allows definition of a variable whose scope is restrcited to a block, a function, a file (but not all files in multi-module program),
        extent is now the lifetime of program, it do not get destroyed on termination of function,
        the variable will remember its value on from the last call.

        it is initialized only once.

        memory space for local static and global variables are from global heap.
    */

    cout<<count<<'\n';
    count++;

    return;
}

int main(){

    // register int i;      register is removed from C++20 and above
    
    /*  allocates the memory in CPU(processor) register which speeds up the execution of program

        number of variables which can be declared as register are limited, typically 2 or 3 within any
        function or as global variables (else they are treated as auto variables)

        if compiler is unable to allocate memory for register variables, they are treated as auto variables

        it is advisable to declare loop indices as a register variable
    */

    int i;
    for(i = 1; i<6; i++){
        printCount();
    }

    return 0;
}