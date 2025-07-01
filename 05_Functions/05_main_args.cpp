// Syntax of the main() function

// use "./05_main_args Hello World" at the command prompt

#include<iostream>
using namespace std;

int main(int argc, char *argv[], char *envp[]){
    // argc: arguments count: holds the value of the number of the arguments passed to the main() function
    // argv: argument vector: hold pointers to the arguments passed from the command line
                // argv[0] = pointer to the name of the executable program file(command)
                // argv[1] .. argv[argc - 1] = pointers to argument strings
    // envp: environment parameters: holds pointers to environment variables set in the operating system during program execution

    int i;
    cout<<"Argument Count = "<<argc;
    cout<<"\nProgram Name = "<<argv[0];
    cout<<"\nArgument Vectors Are :\n";

    for(i=0; i<argc; i++){
        cout<<argv[i]<<'\n';
    }

    cout<<"The Environment Variables Are :\n";
    while(*envp[i]){
        cout<<envp[i++]<<'\n';
    }

    return 0;
}