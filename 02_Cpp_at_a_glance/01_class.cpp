// This is to illustrate the "class" in C++

#include<iostream>
using namespace std;

class counter {
    
    private:
        int value;
    
    public:

        /* Constructor: have same name as that of class, it is called automatically
           when object is created. It can not return anything (not even void).
        */
        counter(){              // no argument constructor
            // initializes the counter value to 0
            value = 0;
        }
    
        counter(int val){       // one argument constructor
            // initializes the counter value
            value = val;
        }
        
        /* Destructor: use '~' sign before the name (same name as that of the class),
           and the destructor is created. It is called automatically when the object is
           destroyed (i.e., goes out of scope or is deleted). Destructor can not return
           anything (not even void).
        */
        ~counter(){
            // destructor
            cout<<"Object destroyed"<<endl;
        }
    
        int getCounter(){
            // counter access
            return value;
        }
    
        void up(){
            // increment counter
            value += 1;
        }

};

int main(){

    counter counter1;        // calls no argument constructor
    counter counter2(1);     // calls one argument constructor

    cout<<"Counter1 = "<<counter1.getCounter()<<endl;
    cout<<"Counter2 = "<<counter2.getCounter()<<endl;

    // Incrementing the counters
    counter1.up();
    counter2.up();

    cout<<"Counter1 = "<<counter1.getCounter()<<endl;
    cout<<"Counter2 = "<<counter2.getCounter()<<endl;

    return 0;

}        // <-- Destructor is called here automatically