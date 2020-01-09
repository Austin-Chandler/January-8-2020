//Austin Chandler
//This is my own work

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //get number in pounds from user
    double pounds = 0;
    cout << "Please enter a number in pounds" << endl;
    cin >> pounds;

    //convert to kg and print
    double kilograms = pounds * 0.454;
    cout << kilograms << " is the weight in kilograms" << endl;

    //get hexagon side value
    double hexagonSide = 0;
    cout << "Please enter a side length of a hexagon" << endl;
    cin >> hexagonSide;

    //find area
    double area = 0;
    double multiplier = (3 * sqrt(3)) / 2;
    area = multiplier * pow(hexagonSide, 2);
    cout << area << " is the area of the hexagon" << endl;

    //get int values from user
    int first = 0;
    int second = 0;
    cout << "Please enter an interger value" << endl;
    cin >> first;
    cout << "Please enter an second interger value" << endl;
    cin >> second;

    //display the larger value 
    int larger = second;
    if (first > second) {
        larger = first;
    }
    cout << larger << " is the larger value" << endl;
    return 0;
}