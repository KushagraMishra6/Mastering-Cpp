// Reading the content from a file sample.in

#include<iostream>
#include<fstream>
#include<process.h>
using namespace std;

int main(){
    char buff[80];

    ifstream infile;                // input file
    infile.open("sample.in");       // open file in input mode

    if(infile.fail()){              // check if file is opened
        cout<<"ERROR: sample.in non-existent";
        exit(1);
    }

    // process until end-of-file
    while(!infile.eof()){
        infile.getline(buff, 80);   // reads a full line
        cout<<buff<<endl;
    }

    infile.close();

    return 0;
}