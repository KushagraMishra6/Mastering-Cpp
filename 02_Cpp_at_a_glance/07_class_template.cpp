// Illustrating the concept of Class Templates

#include<iostream>
using namespace std;

template <class T>
class vector{
    T *v;                   // <-- creation of a pointer to T which can be int, float, string, etc.
    int size;
    public:
        vector(int vector_size){
            size = vector_size;
            v = new T[vector_size];         // eg. v = new int[vector_size], if T is int.
        }
        ~vector(){
            delete[] v;
        }
        T & elem(int i){
            if((i >= size)||(i<0)){
                cout<<endl<<"Error: Out of Range";
            }
            else{
                return v[i];
            }
        }
        void show();
};

template <class T>
void vector<T>::show(){
    for(int i=0; i<size; i++){
        cout<<elem(i)<<", ";
    }
}

int main(){
    int i;
    vector <int> int_vect(5);
    vector <float> float_vect(4);

    for(i=0; i<5; i++){
        int_vect.elem(i) = i+1;
    }
    for(i=0; i<4; i++){
        float_vect.elem(i) = float(i+1.5);
    }

    cout<<"Integer Vector: ";
    int_vect.show();
    cout<<endl<<"Float Vector: ";
    float_vect.show();

    return 0;
}