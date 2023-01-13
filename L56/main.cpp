#include <iostream>

/*
Lesson 56: Accesing and Modifying Array Elements
*/

using namespace std;

int main()
{
    /*
    int test_scores[5]{100, 99, 95, 87, 88};

    cin << test_scores[0];
    cin << test_scores[1];
    cin << test_scores[2];
    cin << test_scores[3];
    cin << test_scores[4];
    */

    char vowels[]{'a', 'e', 'i', 'o', 'u'};
    cout << "The first vowels is: " << vowels[0] << endl;
    cout << "The last vowels is: " << vowels[4] << endl;

    //cin >> vowels[5]; //!Out of bounds.

    double hi_temps[]{90.1, 89.8, 77.5, 81.6};
    cout << "\nThe first high temperature is: " << hi_temps[0] << endl;

    hi_temps[0] = 99.2; //asign stament
    cout << "\nThe first high temperature is now: " << hi_temps[0] << endl;

    return 0;
}
