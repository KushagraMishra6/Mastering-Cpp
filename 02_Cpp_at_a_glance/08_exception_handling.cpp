// Illusatrating the Exception Handling mechanism of C++

/* The mechanism suggests that error-handling code must perform the following tasks.

   1) Detect the problem causing exception (Hit the exception).
   2) Inform that an error has occured (Throw the exception).
   3) Receive the error information (Catch the exception).
   4) Take corrective actions (Handle the exceptions).

*/

#include<iostream>
using namespace std;

class number{
    private:
        int num;
    public:
        void read(){
            cin>>num;
        }

        // Abstract class used in exceptions
        class DIVIDE{};

        int div(number num2){
            if (num2.num == 0){         // check for divisor is zero
                throw DIVIDE();         // raise an exception
            }
            else{
                return num/num2.num;   // compute and return the result
            }
        }
};

int main(){
    number num1, num2;
    int result;

    cout<<"Enter num1 = ";
    num1.read();
    cout<<"Enter num2 = ";
    num2.read();

    // statements must be enclosed in try block if an exception is to be raised
    try{
        cout<<"trying division operation...";
        result = num1.div(num2);
        cout<<"succeeded"<<endl;
    }

    // exception handler block
    catch(number::DIVIDE){
        // action is taken in response to exception
        cout<<"failed"<<endl;
        cout<<"Exception: Divide-By-Zero";
        return 1;
    }

    // no exceptions --> displaying result
    cout<<"num1/num2 = "<<result;
    
    return 0;
}