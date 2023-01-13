#include <iostream>

/*
Lesson 55: Declaring and initializing arrays
*/

using namespace std;

int main()
{
    int test_scores[5]{100, 99, 95, 87, 88};

    int high_score_per_level[10]{3, 5}; // the remaining set to zero

    const int days_in_year{365};
    double hi_temperatures[days_in_year]{0}; //init all to zero

    int another_array[]{1, 2, 3, 4, 5}; // size automatically calculated

    return 0;
}
