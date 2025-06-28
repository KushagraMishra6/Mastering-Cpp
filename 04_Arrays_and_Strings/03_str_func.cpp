// String Manipulation

#include<iostream>
#include<string.h>
using namespace std;

int main(){

    char name[26], s1[26];
    cout<<"Enter your name [max-25-characters] : ";
    cin>>name;

    // 1) String Length : strlen( str_var )
    cout<<"strlen(name) = "<<strlen(name)<<endl;

    // 2) String Copy : strcpy( destination_str , source_str )
    strcpy(s1, name);

    cout<<"After executing strcpy(s1, name)..."<<endl;
    cout<<"s1 = "<<s1<<endl;

    // 3) String Concatenation : strcat( destination/first_str , source/second_str )
    strcat(name, s1);

    cout<<"After executing strcat(name, s1)..."<<endl;
    cout<<"s1 = "<<s1<<endl;
    cout<<"name = "<<name<<endl;

    /* 4) String Comparison : strcmp( str1 , str2 )
            <0 if str1 is less than str2
            ==0 if both are identical
            >0 if str1 is greater than str2         <-- character with higher ASCII value is greater
    */
    int status = strcmp(name, s1);

    cout<<"After executing strcmp(name, s1)..."<<endl;
    if(status<0) cout<<"name is less than s1"<<endl;
    else if(status>0) cout<<"name is greater than s1"<<endl;
    else cout<<"name is identical to s1"<<endl;

    // 5) String to Upper/Lower Case : strupr( str ) , strlwr( str )
    strupr(s1);
    strlwr(name);

    cout<<"After executing strupr(s1)..."<<endl;
    cout<<"s1 = "<<s1<<endl;

    cout<<"After executing strlwr(name)..."<<endl;
    cout<<"name = "<<name<<endl;

    return 0;
}