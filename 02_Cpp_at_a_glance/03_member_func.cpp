// Illustrating the member function definition outside the class

#include<iostream>
#include<string>
using namespace std;

class student{
    
    private:
        int roll_no;
        string name;
    public:
    // function declaration
        void setdata(int roll_no_in, const string& name_in);
        void outdata();
};

// function definition
void student::setdata(int roll_no_in, const string& name_in){
    roll_no = roll_no_in;
    name = name_in;
}

void student::outdata(){
    cout<<"Roll no = "<<roll_no<<endl;
    cout<<"Name = "<<name<<endl;
}

int main(){

    student s1;
    student s2;

    s1.setdata(1, "Sumit");
    s2.setdata(2, "Om");

    cout<<"Student details... "<<endl;
    s1.outdata();
    s2.outdata();

    return 0;
}