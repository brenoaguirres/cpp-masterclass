// C++20 Masterclass
//-------------------------------
// Pointer to char
//-------------------------------
// Student: Breno Freitas Aguirres
// Date: 04/09/23

#include <iostream>

using namespace std;

int main()
{
    //The line below is possible in some compilers, but you should avoid it because if you try to modify this string (which is a const)
    //you'll get a runtime crash.

    // char * message {"Hello world!"};

    // use the following then to avoid risks.
    const char *message {"Hello world!"};
    std::cout << "message : " << message << std::endl;
    std::cout << "message : " << *message << std::endl;

    //Allow users to modify the string
    //Use a char array instead, leave char pointers to just printing messages.
    char message1[] {"Hello world!"};
    message1[0] = 'B';
    std::cout << "message1 : " << message1 << std::endl;

    std::cout << "Press any key to continue...\n" << std::endl;
    getchar();
    return 0;
}
