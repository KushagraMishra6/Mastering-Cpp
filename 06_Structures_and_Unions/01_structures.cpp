// Illustrating the concept of structures in C++

// Structures are used for grouping of logically related data into a single unit

// Structures in C++ are similar to Classes, the only difference is that Classes are private by default and Structures are public by default

#include<iostream>
using namespace std;

struct Employee{            // <-- Declaration of Structure named Employee

private:                     // <--Access Specifier
    
    char name[30];          // <-- Data members of the structure
    long ID;
    char dept[20];
    float salary;

    struct date{            // <-- Declaration and Definition of as nested structure named date (DOB is variable)
    public:
        int DD;
        int MM;
        int YYYY;
    } DOB;

public:

    void read(){            // <-- Member functions of the structure
        cout<<"Employee Name? : ";
        cin>>name;
        cout<<"Employee ID? : ";
        cin>>ID;
        cout<<"Department? : ";
        cin>>dept;
        cout<<"Salary? : ";
        cin>>salary;
        cout<<"DOB? (DD MM YYYY) : ";
        cin>>DOB.DD>>DOB.MM>>DOB.YYYY;
    }

    void show(){
        cout<<"Employee Name : "<<name;
        cout<<"\nEmployee ID : "<<ID;
        cout<<"\nDepartment : "<<dept;
        cout<<"\nSalary : "<<salary;
        cout<<"\nDOB : "<<DOB.DD<<" "<<DOB.MM<<" "<<DOB.YYYY;
    }

    Employee(){             // <-- Constructor of structure
        cout<<"Constructor is called\n\n";
    }

    ~Employee(){            // <-- Destructor of structure
        cout<<"\n\nDestructor is called\n";
    }
};

int main(){

    Employee emp;           // <-- Defining a variable of type Employee
    
    cout<<"Fill in the Employee details...\n";
    emp.read();             // <-- Accessing the member function through dot operator, also used for accessing the data members

    cout<<"\nEmployee details are saved successfully\n\n";

    cout<<"Showing the details of the Employee...\n";
    emp.show();

    return 0;
}