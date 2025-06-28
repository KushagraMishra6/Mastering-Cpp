// Algorithm of Comb Sorting

/* Comb Sort is an improvement over Bubble Sort that eliminates small values 
   (called "turtles") near the end of the list faster. It starts with a large gap 
   between compared elements and keeps shrinking the gap by a factor (commonly 1.3) 
   until it reaches 1. In each pass, elements that are 'gap' distance apart are compared 
   and swapped if out of order. The process continues until no swaps are needed and the gap is 1.
*/

#include<iostream>
using namespace std;

int main(){

    int flag = 1;
    int arr[] = {10, 5, 7, 6, 1, 2, 4, 8, 3, 9};

    int gap = 10;       // size of the array

    do{
        flag = 1;
        gap = int(gap/1.3);
        if(gap < 1) gap = 1;

        int top = 10 - gap;
        for(int i = 0; i<top; i++){
            int j = i + gap;
            if(arr[i] > arr[j]){
                flag = 0;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    while( !flag || gap>1);

    cout<<"Sorted array is :";
    for(int i = 0; i<10; i++) cout<<endl<<arr[i];

    return 0;
}