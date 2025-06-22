// To illustrate the uses of access specifiers in C++

#include<iostream>
using namespace std;

class myClass{

    private:
        int x;      // <-- can be accessed inside myClass only
    
    protected:
        int y;      // <-- can be accessed inside myClass and any other derived classes

    public:
        int z;      // <-- can be accessed anywhere in the program

        void setx(int val){
            x = val;
        }
        void sety(int val){
            y = val;
        }
        void setz(int val){
            z = val;
        }

        void showx(){
            cout<<"x = "<<x<<endl;
        }
        void showy(){
            cout<<"y = "<<y<<endl;
        }
        void showz(){
            cout<<"z = "<<z<<endl;
        }

        ~myClass(){};
};

class Derived: public myClass{          // <-- Derived class contains everything from the base class
    public:
        void accessBaseMembers() {
        // x = 10;                      // Not Allowed as x is private
        y = 20;                         // Allowed
        z = 30;                         // Allowed
    }

    void show() {
        // cout << x << endl;           // Not allowed
        cout << "y = " << y << endl;    // Allowed
        cout << "z = " << z << endl;    // Allowed
    }

    ~Derived(){};
};

int main(){
    
    myClass obj;
    // obj.x = 10;             // NOT ALLOWED as x is private
    // obj.y = 20;             // NOT ALLOWED as y is protected
    obj.z = 30;                // ALLOWED

    obj.setx(10);              // ALLOWED
    obj.sety(20);              // ALLOWED
    obj.setz(30);              // ALLOWED

    obj.showx();               // ALLOWED
    obj.showy();               // ALLOWED
    obj.showz();               // ALLOWED

    Derived d;
    // d.x = 10;             // NOT ALLOWED as x is private
    // d.y = 20;             // NOT ALLOWED as y is protected
    d.z = 30;                // ALLOWED

    d.setx(10);              // ALLOWED
    d.sety(20);              // ALLOWED
    d.setz(30);              // ALLOWED

    d.showx();               // ALLOWED
    d.showy();               // ALLOWED
    d.showz();               // ALLOWED

    d.accessBaseMembers();
    d.show();

    return 0;
}