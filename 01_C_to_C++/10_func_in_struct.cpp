// Function in structure

#include<iostream>
using namespace std;

struct date{
    int day, month, year;

    // Member function can also be defined outside the structure.
    void show(){
        cout<<day<<"-"<<month<<"-"<<year<<endl;
    }
};

int main(){

    date bDate = {18, 11, 2005};
    cout<<"My birthdate is ";
    bDate.show();

    return 0;
}