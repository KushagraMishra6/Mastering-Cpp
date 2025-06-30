// Return variable by reference

#include<iostream>
using namespace std;

int & max(int & x, int & y){

    // this function return reference variable

    if(x>y) return x;
    else return y;
}

int main(){

    int a, b;
    cout<<"Enter the value for two integers <a,b> : ";
    cin>>a>>b;

    max(a, b) = 500;
    // max(a, b) returns the reference to the variable holding the maximum value and assigns the value 500 to it

    cout<<"Upon executing max(a, b) = 500; ...."<<'\n';
    cout<<"a = "<<a<<"\nb = "<<b<<'\n';

    return 0;
}