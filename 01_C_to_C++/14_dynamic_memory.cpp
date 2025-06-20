// Dynamic memory allocation in C++ with operators (i) new, and (ii) delete

#include<iostream>
using namespace std;

int main(){

    int *a = new int(100); // same as int *a = (int *)malloc(sizeof(int)) and *a = 100
    // allocates memory for 1 int and assigns it value 100

    float *b = new float(5.25); // same as float *b = (float *)malloc(sizeof(float)) and *b = 5.25
    // allocates memory for 1 float and assigns it value 5.25

    cout<<"*a = "<<*a<<"\n*b = "<<*b<<endl;

    delete a; // releases the allocated memory
    delete b; // releases the allocated memory

    int *c = new int[100]; // same as int *c = (int *)malloc(sizeof(int)*100) i.e. creates 100 int memory locations
    delete[] c; // use delete[] when you've allocated array using new operator

    return 0;
}