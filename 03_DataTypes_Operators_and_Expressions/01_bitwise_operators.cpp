// Bitwise Operators in C++

#include<iostream>
using namespace std;

int main(){

    int a = 13, b = 7, c;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;

    /*  binary form representation of a and b
        a = 0000 0000 0000 1101
        b = 0000 0000 0000 0111
    */

    /*  1) Bitwise-AND
                a = 0000 0000 0000 1101
                b = 0000 0000 0000 0111
            a & b = 0000 0000 0000 0101  =  10
    */
    c = a & b;
    cout<<"a & b = "<<c<<endl;

    /*  2) Bitwise-AND
                a = 0000 0000 0000 1101
                b = 0000 0000 0000 0111
            a | b = 0000 0000 0000 1111  =  15
    */
    c = a | b;
    cout<<"a | b = "<<c<<endl;

    /*  3) Bitwise-XOR
                a = 0000 0000 0000 1101
                b = 0000 0000 0000 0111
            a ^ b = 0000 0000 0000 1010  =  10
    */
    c = a ^ b;
    cout<<"a ^ b = "<<c<<endl;

    /*  4) Bitwise-NOT
                a = 0000 0000 0000 1101
               ~a = 1111 1111 1111 0010  =  -14
                1000 0000 0000 0000  <-- 1 here represents the -ve other bits are for magnitude
    */
    c = ~a;
    cout<<"~a = "<<c<<endl;

    /*  5) Shift Left
                a = 0000 0000 0000 1101
             a<<1 = 0000 0000 0001 1010  =  26  <-- shift the bits to the left by one place
             a<<2 = 0000 0000 0011 0100  =  52  <-- shift the bits to the left by two places
    */
   c = a<<2;
   cout<<"a<<2 = "<<c<<endl;

   /*  6) Shift Right
                a = 0000 0000 0000 1101
             a>>1 = 0000 0000 0000 0110  =  6  <-- shift the bits to the right by one place
             a>>2 = 0000 0000 0000 0011  =  3  <-- shift the bits to the right by two places
    */
   c = b>>2;
   cout<<"b>>2 = "<<c<<endl;

   return 0;
}