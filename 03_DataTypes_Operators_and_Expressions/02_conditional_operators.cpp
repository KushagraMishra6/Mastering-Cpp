// Illustrating the usage of Conditional Operator also called Ternary Operator as it operates upon three operands

/*  (expression1 ? expression2 : expression3);

    exp1 --> to be checked for TRUE or FALSE
    exp2 --> to be executed when exp1 is TRUE
    exp3 --> to be executed when exp1 is FALSE

    after executing, lets say exp1 was TRUE then, whole bracket will behave as ( expression2 );
*/

/*  behaves same as

    if(expression1) expression2;
    else expression3;
*/

#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter the number: ";
    cin>>num;

    // 1)
    cout<<((num % 2)? "Odd\n" : "Even\n");

    cout<<"Enter the number: ";
    cin>>num;

    // 2)
    (num % 2)? cout<<"Odd\n" : cout<<"Even\n";

    int a = 5, b = 3, z;

    // 3)
    z = ((a > b)? a : b);           // <-- assigns the value a to z, as a is greater than b i.e. z = a;

    return 0;
}