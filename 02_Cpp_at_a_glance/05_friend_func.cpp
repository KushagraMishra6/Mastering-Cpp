// Illustrating the concept of friend function

/* friend function is not a member of the class but it is allowed to access the private
and protected members of the class.

It can be another class, a normal function and even a operator function.

It is not inherited by derived class.

Can't be called using obj.friend_function().
*/

#include<iostream>
using namespace std;

class counter{
    private:
        int value;
    public:
        counter(){
            value  = 0;
        }
        counter(int val){
            value = val;
        }
        ~counter(){}
        void operator ++(){
            value += 1;
        }
        void operator ++(int){
            value += 1;
        }
        void operator --(){
            value -= 1;
        }
        void operator --(int){
            value -= 1;
        }
        int getCounter(){
            return value;
        }

        // Overloading the binary operator +
        counter operator +(counter counter2);

        // friend function
        friend ostream & operator << (ostream & Out, counter & counter);
};


// :: is used as the member function is being defined outside the class
counter counter::operator +(counter counter2){
    counter temp;
    // value belongs to the counter 1
    temp.value = value + counter2.value;
    return temp;
}

// no need of :: as it is a friend function and not a member of class
ostream & operator << (ostream & Out, counter & counter){
    // display all internal data of counter class
    cout<<counter.value;
    // return output stream Out for cascading purpose
    return Out;
}

int main(){
    counter counter1;
    counter counter2(1);

    cout<<"Initially counter1 = "<<counter1<<endl;
    cout<<"Initially counter2 = "<<counter2<<endl;

    ++counter1;
    counter2++;

    cout<<"counter1 on increment = "<<counter1<<endl;
    cout<<"counter2 on increment = "<<counter2<<endl;

    --counter1;
    counter2--;

    cout<<"counter1 on decrement = "<<counter1<<endl;
    cout<<"counter2 on decrement = "<<counter2<<endl;

    counter counter3;
    counter3 = counter1 + counter2;         // calls operator +(counter)
    cout<<"counter3 = counter1 + counter2 = "<<counter3<<endl;

    return 0;
}