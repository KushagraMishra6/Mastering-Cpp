// Algorithm of Bubble Sorting

#include<iostream>
using namespace std;

int main(){

    int flag = 1;
    int arr[] = {10, 5, 7, 6, 1, 2, 4, 8, 3, 9};

    for(int i = 0; i<10-1; i++){
        for(int j = 0; j<10-1-i; j++){
            if(arr[j] > arr[j+1]){
                flag = 0;
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        if(flag) break;
        flag = 1;
    }

    // in 1st pass it sets 10 to the end of array, then 9, then 8 and goes on, if they are not on their right place to be

    cout<<"Sorted array is :";
    for(int i = 0; i<10; i++) cout<<endl<<arr[i];

    return 0;
}