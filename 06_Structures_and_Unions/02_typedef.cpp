// DataType enhancement using typedef

// "using" is used in Modern C++ instead of "typedef"

// both statements used below do the same thing i.e. to create an alias for existing DataTypes


// C-style OR Old C++ style
typedef int Length;         // <-- Length is now an alias for int
typedef int emperc[10];     // <-- emperc is now an alias for an array of 10 integers
typedef char* string;       // <-- string is now an alias for char*
typedef int& INTREF;        // <-- INTREF is now an alias for int& (a reference to an int)


// Modern C++ style
using Length = int;         // <-- Length is now an alias for int
using emperc = int[10];     // <-- emperc is now an alias for an array of 10 integers
using string = char*;       // <-- string is now an alias for char*
using INTREF = int&;        // <-- INTREF is now an alias for int& (a reference to an int)


int main(){

    Length len;             // <-- equivalent to "int len;"

    emperc person;          // <-- equivalent to "int person[10];"

    string str;             // <-- equivalent to "char *str;"

    INTREF b = len;         // <-- equivalent to "int &b = len;"

    return 0;
}