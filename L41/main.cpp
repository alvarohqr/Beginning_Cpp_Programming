#include <iostream>

/*
Lesson 41: Namespaces
*/
using namespace std;
/*
using std::cout;
using std::cin;
using std::endl;
*/

int main()
{
    int fav_number = 0;

    cout << "Enter your favorite number between 1 and 100: ";
    cin  >> fav_number;
    cout << "Amazing!! That's my favorite number too!" << endl;
    cout << "No really!!, "<< fav_number << " is my favorite number!" << endl;

    return 0;
}
