/* Use of Scope-Resolution Operator (::) to access global variable in a block
where a local variable exists with same name. */

// Scope-Resolution Operator (::)

#include<iostream>
using namespace std;

int num = 20; // global declaration

int main(){
    int num = 10; // local decalaration

    cout<<"Local num = "<<num;
    cout<<"\nGlobal num = "<<::num;

    return 0;
}