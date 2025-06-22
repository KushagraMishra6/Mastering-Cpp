// Illustrating the concept of operator overloading

#include<iostream>
using namespace std;

class counter{
    private:
        int value;
    public:
        counter(){
            value = 0;
        }
        counter(int val){
            value = val;
        }
        ~counter(){}
        int getCounter(){
            return value;
        }

        // Overloading the ++ operator

        // prefix incrementor
        void operator ++(){
            value += 1;
        }
        // postfix incrementor
        void operator ++(int){
            value += 1;
        }
        
        // Overloading the -- operator

        // prefix decrementor
        void operator --(){
            value -= 1;
        }
        // postfix decrementor
        void operator --(int){
            value -= 1;
        }
};

int main(){
    counter counter1;
    counter counter2(1);

    cout<<"Initially counter1 = "<<counter1.getCounter()<<endl;
    cout<<"Initially counter2 = "<<counter2.getCounter()<<endl;

    ++counter1;
    counter2++;

    cout<<"counter1 on increment = "<<counter1.getCounter()<<endl;
    cout<<"counter2 on increment = "<<counter2.getCounter()<<endl;

    --counter1;
    counter2--;

    cout<<"counter1 on decrement = "<<counter1.getCounter()<<endl;
    cout<<"counter2 on decrement = "<<counter2.getCounter()<<endl;

    return 0;
}