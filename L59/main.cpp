#include <iostream>
#include <vector>
/*
Lesson 59: Accesing and Modifying Vector Elements
In C++ vectors are object and support operations
vector_name.at(element_index)
*/

using namespace std;

int main()
{
    vector <int> test_scores {100, 98, 89, 87, 94};

    cout << "Current vector size: " << test_scores.size() << endl; //size method
    cout << endl;

    for (int i = 0; i < test_scores.size(); i++){
        cout << "Element at index " << i<< " : " << test_scores.at(i)<< endl;
    }

    /*
    Vectors can growth dynamically while arrays can't:
    Push back method:
        vector_name.push_back(element)
    */

    test_scores.push_back(80);      //100, 98, 89, 87, 94, 80
    test_scores.push_back(90);      //100, 98, 89, 87, 94, 80, 90

    cout << "\nCurrent vector size now: " << test_scores.size() << endl;
    cout << endl;

     for (int i = 0; i < test_scores.size(); i++){
        cout << "Element at index " << i<< " : " << test_scores.at(i)<< endl;
    }


    return 0;
}
