// Using struct in C++

/* General syntax of the C++ structure is given below

struct structname{
    public:
        // data and functions
    private:
        // data and functions
    protected:
        // data and functions
};

*/ // Private and Protected members are accessible only within the structure.

#include<iostream>
using namespace std;

struct date{
    // By default it is Public.
    int day, month, year;
};

int main(){

    date bDate = {18, 11, 2005};

    cout<<"My birthdate is "<<bDate.day<<"-"<<bDate.month<<"-"<<bDate.year;

    return 0;
}