// Using the concept of Reference Variable

// Reference variables are not bounded to a new memory location, but to the variables to which they are aliases

#include<iostream>
using namespace std;

int main(){
    char ch = 'a';
    int b, y[200];
    int n = 100;
    float z = 3.1452;
    double length;
    
    char & ch1 = ch;
    // ch1 is an alias for char ch
    cout<<ch1;
    
    int & a = b;
    // a is an alias of int b
    
    float & x = z;
    // x is an alias of float z
    cout<<endl<<x;
    
    double & height = length;
    // height is an alias of double length
    
    int & w = y[100];
    // w is an alias of y[100] element

    int *p = &n;
    int & m = *p;
    // this declaration causes m to refer n
    cout<<endl<<m;
    
    cout<<endl<<&n<<endl<<p<<endl<<&m; // Reference variables are not bounded to a new memory location, but to the variables to which they are aliases

    // int & num = 100; 
    // INVALID (no alias for a constant value)

    float q = 20;
    x = q;
    // changes the value of z to the value of q, as x is an alias for z
    cout<<endl<<z;

    return 0;
}
