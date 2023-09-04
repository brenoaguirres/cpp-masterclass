// C++20 Masterclass
//-------------------------------
// Declaring and Using Pointers
//-------------------------------
// Student: Breno Freitas Aguirres
// Date: 04/09/23

#include <iostream>

using namespace std;

int main()
{
    //Assigning data to pointer variables
    int int_var {43};
    int *p_int{&int_var};

    std::cout << "Int var : " << int_var << std::endl;
    std::cout << "p_int (Address in memory : " << p_int << std::endl;
    std::cout << "*p_int (Content of the address) : " << *p_int << std::endl;

    int int_var1 {65};

    int_var1 = 126;

    p_int = &int_var1;
    std::cout << "p_int (Different address) : " << p_int << std::endl;
    std::cout << "*p_int (Different content : " << *p_int << std::endl;

    //Declare and initialize pointers
    int *p1{};
    double *dp1{};

    //Explicitly initialize pointers
    int *p2{nullptr};
    double *dp2{nullptr};

    // Pointers to different values are of the same size
    std::cout << "sizeof(int) : " << sizeof(int) << std::endl;
    std::cout << "sizeof(double) : " << sizeof(double) << std::endl;
    std::cout << "sizeof(int*) : " << sizeof(int*) << std::endl;
    std::cout << "sizeof(double*) : " << sizeof(double*) << std::endl;

    //Doesn't matter the position of the *
    int*  p_number2{};
    int * p_number3{};
    int  *p_number4{}; // most common

    //Declaring in the same line - p6 and p8 will be regular integers and not pointers.
    //Better to declare in separate lines.
    int *p5{}, p6{};
    int* p7{}, p8{};

    std::cout << "sizeof(p5) : " << sizeof(p5) << std::endl;
    std::cout << "sizeof(p6) : " << sizeof(p6) << std::endl;
    std::cout << "sizeof(p7) : " << sizeof(p7) << std::endl;
    std::cout << "sizeof(p8) : " << sizeof(p8) << std::endl;

    //Assigning pointers
    int new_int {43};
    int *new_p {&new_int};

    std::cout << "Int var : " << new_int << std::endl;
    std::cout << "Int var address : " << &new_int << std::endl;
    std::cout << "Pointer to int var pointed value : " << *new_p << std::endl;
    std::cout << "Pointer to int var stored address : " << new_p << std::endl;

    //IMPORTANT: Can't cross assign between pointers of different types -- compiler error

    //Dereferencing a pointer --> reading a value stored in a variable through a pointer


    std::cout << "Press any key to continue...\n" << std::endl;
    getchar();

    return 0;
}
