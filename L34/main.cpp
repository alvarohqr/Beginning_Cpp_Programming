#include <iostream>


/*
Section 4 Challenge

Create a C++ program that ask the user for their favorite number
between 1 and 100 then reads this number from the console.

Suppose the user enters 24.

Then display the following console:
    Amazing!! That's my favorite number too!
    No really!!, 24 is my favorite number!


*/
using namespace std;

int main()
{
    int fav_number = 0;

    std::cout << "Enter your favorite number between 1 and 100: ";

    std::cin  >> fav_number;

    std::cout << "Amazing!! That's my favorite number too!" << std::endl;
    //std::cout << "No really!!,"; std::cout << fav_number; std::cout<< " is my favorite number!" << std::endl;
    std::cout << "No really!!, "<< fav_number << " is my favorite number!" << std::endl;

    return 0;
}
