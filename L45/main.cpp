#include <iostream>

using namespace std;

//! Lesson 45: Declaring and Initializing Variables
//! This program will calculate the area of a room in square feet

int main()
{
    int room_lenght{0}, room_width{0}; // list initialization
    cout << "Enter the width of the room: ";
    cin >> room_width;

    cout << "Enter the lenght of the room: ";
    cin >> room_lenght;

    int area{0};
    area = room_lenght*room_lenght;
    cout << "The area of the room is: " << area << " square feet" <<endl;
    return 0;
}
