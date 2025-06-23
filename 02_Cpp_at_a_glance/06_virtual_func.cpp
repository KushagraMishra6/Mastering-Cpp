// Illustrating the concept of Virtual Functions and Run-time Polymorphism

/* son_pointer->getAge() would have called the Father::getAge() if the
   function was not declared as a Virtual Function.

   runtime polymorphism is achieved only when a virtual function is accessed through the pointer to a base class.

   when a function is defined as virtual in the base class and if the same function
   is redefined in the derived class, that function is also treated as a virtual function by default.

   Only class member functions can be declared as virtual functions. Regular functions and friend 
   functions do not qualify as virtual functions.
*/

#include<iostream>
using namespace std;

class Father{
    protected:
        int f_age;
    public:
        Father(int n){
            f_age = n;
        }
        virtual ~Father(){}

        // declaration of virtual function in base class
        virtual int getAge(void){
            return f_age;
        }
};

// derived class Son inherits the base class Father
class Son : public Father{
    protected:
        int s_age;
    public:
        Son(int n, int m) : Father(n){
            s_age = m;
        }
        int getAge(void){
            return s_age;
        }
};

int main(){

    Father *basep;
    basep = new Father(45);             // <-- dynamic memory allocation to the pointer
    
    cout<<"Father's age = ";
    cout<<basep->getAge()<<endl;        // <-- calls Father::getAge()
    delete basep;

    basep = new Son(45, 20);
    cout<<"Son's age = ";
    cout<<basep->getAge()<<endl;        // <-- calls Son::getAge()
    delete basep;

    return 0;
}