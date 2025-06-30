/*  The medium for communication between a caller and the callee is the stack, which is used to store 
    function parameters, return address, local variables, etc. When the function is invoked, the information 
    such as return address and parameters, are pushed onto the stack by the function linkage mechanism; 
    these values are pushed onto or popped from the stack using the C convention for parameter passing. 
    The argument values are pushed in order, from right to left. When they are popped out, the topmost 
    value stored in the stack will be passed to the first parameter in the function parameter list.
*/



// C++ convention of using stack
#include<iostream>
using namespace std;

void Func(int j, int k){
    cout << "In the function the argument values are " << j << ".. " << k << endl;
}
int main(){
    int i = 99;
    Func( ++i, i );

    return 0;
}


  
/*  In C++, the order in which function arguments are evaluated is unspecified. In the statement 
    Func(++i, i), the compiler may evaluate either ++i or i first. Hence, depending on the compiler 
    and optimization settings, the result may vary. It is not guaranteed that the value 100 will be 
    passed to the first parameter and 99 to the second.

    Therefore, the output of the program is compiler-dependent. Avoid writing expressions with 
    side effects (like ++i) alongside other uses of the same variable in function calls.
*/
