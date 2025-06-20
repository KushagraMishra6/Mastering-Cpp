// Testing of Reference Binding

#include<iostream>
using namespace std;

int main(){

    int n = 100;
    int *p = &n;
    int & m = *p;
    // m is bound to n

    cout<<"n = "<<n<<"\nm = "<<m<<"\n*p = "<<*p;
    cout<<"\n&n = "<<&n<<"\n&m = "<<&m<<"\np = "<<p;

    int k = 5;
    p = &k;
    // pointer is changed to the address of k

    cout<<"\nm = "<<m;
    // value of m is not changed upon changing the value of pointer
    // m is still bounded to n

    return 0;
}
