// Illustrating the concept of Unions in C++

// Unions are used when multiple members share the same memory location, meaning only one member can store a value at any time

// Useful when a variable can hold different types but only one at a time

#include<iostream>
#include<cstring>          // <-- For strcpy function
using namespace std;

struct Payment{           // <-- Declaration of Structure named Payment to hold user and payment details

private:                  // <-- Access Specifier

    char name[30];        // <-- Name of the person making the payment
    float amount;

    union Method{         // <-- Declaration and Definition of Union named Method for payment method
    public:
        char cashNote[10];     // <-- Description if paid by cash (e.g., "Cash")
        long cardNumber;       // <-- Card number if paid by card
        char upiID[30];        // <-- UPI ID if paid by UPI
    } method;

    enum Type{             // <-- Enum to track which method was used
        CASH,
        CARD,
        UPI
    } paymentType;

public:

    void read(){           // <-- Member function to take input
        cout<<"Payer's Name? : ";
        cin>>name;
        cout<<"Amount to be paid? : ";
        cin>>amount;

        int choice;
        cout<<"Payment Method? (1. Cash 2. Card 3. UPI) : ";
        cin>>choice;

        switch(choice){
            case 1:
                strcpy(method.cashNote, "Cash");   // <-- Assigning value to union member
                paymentType = CASH;
                break;
            case 2:
                cout<<"Enter Card Number : ";
                cin>>method.cardNumber;
                paymentType = CARD;
                break;
            case 3:
                cout<<"Enter UPI ID : ";
                cin>>method.upiID;
                paymentType = UPI;
                break;
            default:
                cout<<"Invalid choice. Defaulting to Cash.\n";
                strcpy(method.cashNote, "Cash");
                paymentType = CASH;
        }
    }

    void show(){           // <-- Member function to display details
        cout<<"Payer Name : "<<name;
        cout<<"\nAmount Paid : "<<amount;

        cout<<"\nPayment Method : ";
        switch(paymentType){
            case CASH:
                cout<<method.cashNote;
                break;
            case CARD:
                cout<<"Card Number - "<<method.cardNumber;
                break;
            case UPI:
                cout<<"UPI ID - "<<method.upiID;
                break;
        }
    }

    Payment(){             // <-- Constructor of structure
        cout<<"Constructor is called\n\n";
    }

    ~Payment(){            // <-- Destructor of structure
        cout<<"\n\nDestructor is called\n";
    }
};

int main(){

    Payment pay;           // <-- Defining a variable of type Payment

    cout<<"Fill in the Payment details...\n";
    pay.read();            // <-- Accessing the member function using dot operator

    cout<<"\nPayment details are saved successfully\n\n";

    cout<<"Showing the details of the Payment...\n";
    pay.show();

    return 0;
}
