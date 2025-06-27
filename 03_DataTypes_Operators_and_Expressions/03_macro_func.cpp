// Illustrating the concept of Macro Functions

#include<iostream>
using namespace std;

// defining the single line body Macro Function
# define max(a, b) ((a > b)? a : b)

// defining the multi-line body Macro Function, '\' is used at the end of each new line for multi line definition
# define print(n) \
    for(int i = 0; i<n; i++) \
        cout<<i; \

// Macro Functions are replaced by their body during precompilation/preprocessing

int main(){
    cout<<"max(2, 3) = "<<max(2, 3)<<endl;
    cout<<"max(10.2, 4.5) = "<<max(10.2, 4.5)<<endl;

    int i = 5, j = 10;
    cout<<"i = "<<i<<endl;
    cout<<"j = "<<j<<endl;
    
    cout<<"On execution of k = max(++i, ++j)..."<<endl;
    
    int k = max(++i, ++j);
    // the max value will be incremented twice as this function call is replaced by ((++i > ++j)? ++i : ++j)

    cout<<"i = "<<i<<endl;
    cout<<"j = "<<j<<endl;
    cout<<"k = "<<k<<endl;

    print(5);

    return 0;
}