// Illustrating the concept of Bit Fields in C++

// Used when you have to store values with (yes/no) flags

using ui = unsigned int;

// this saves space as it allot 10 bits in total
struct {
    ui is_degree : 1;           // <-- value after : decides the width of bit field, 1 means 1 bit wide field can store values 0-1
    ui is_employed : 1;
    ui is_married : 1;
    ui is_male : 1;
    ui is_teenage : 1;
    ui is_indian : 5;             // <-- 5 means 5 bit wide i.e. it can hold the values 0-31
} flags;

int main(){

    // this will waste space as it requires total 24 bytes (4 bytes x 6)
    int is_degree;
    int is_employed;
    int is_married;
    int is_male;
    int is_teenage;
    int is_indian;

    // bit fields access
    flags.is_degree = 1;        // <-- indicates that the person is graduated
    flags.is_married = 0;       // <-- indicates that the person is unmarried

    return 0;
}