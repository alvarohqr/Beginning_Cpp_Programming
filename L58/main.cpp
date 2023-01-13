#include <iostream>

/*
Lesson 58: Vectors in C++
A vector is a object.
*/

#include <vector>

using namespace std;

int main()
{
    //vector <char> vowels;
    //vector <int> test_scores;

    //vector <char> vowels (5); // Tells the compiler you want 5 characetrs
    //vector <int> test_scores (10); // All set to zero

    vector <char> vowels {'a', 'e', 'i', 'o', 'u'};
    vector <int> test_scores {100, 98, 89, 87, 94};
    vector <double> hi_temperatures (365, 80.0) //! (vector_size, init_value)
    return 0;
}
