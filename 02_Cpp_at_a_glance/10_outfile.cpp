// Writing all the input into the a file sample.out

#include<iostream>
#include<fstream>
#include<process.h>
#include<string.h>
using namespace std;

int main(){
    char buff[80];

    ofstream outfile;                       // output file
    outfile.open("sample.out");             // open file in output mode

    if(outfile.fail()){
        cout<<"ERROR: sample.out unable to open";
        exit(1);
    }

    // loop until input ends
    while(1){
        cin.getline(buff, 80);              // read a line from keyboard
        if(strcmp(buff, "end") == 0) break;
        outfile<<buff<<endl;                // write to output file
    }
    outfile.close();

    return 0;
}