#include <iostream>
#include <sstream>
#include <string.h>

#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"

using namespace std;

int main()
{
    string color;
    bool filled;
    double radius, side, length, width;
    char choice;

    cout<<"Enter the choice of shape: "<<endl<<" C for circle, R for rectangle and S for square: "<<endl;
    cin>> choice;

    if(choice == 'C' || choice == 'c')
    {
        cout<<"Enter the radius of the circle: ";
        cin>> radius;
        cout<<"Is color filled(1 for filled and 0 for Not Filled): ";
        cin>> filled;
        cout<<"Enter the color: ";
        cin>> color;
        Circle newCircle(color, filled, radius);
        cout << newCircle.toString() << endl;
    }

    else if(choice == 'R' || choice == 'r')
    {
        cout<< "Enter the width and length of rectangle: ";
        cin>> width>> length;
        cout<<"Is color filled: ";
        cin>> filled;
        cout<<"Enter the color: ";
        cin>> color;
        Rectangle newRectangle(width, length, color, filled);
        cout << newRectangle.toString() << endl;
    }

    else if(choice == 'S' || choice == 's')
    {
        cout<< "Enter the side of square : ";
        cin>> side;
        cout<<"Is color filled (1 for YES and 0 for  NO: ";
        cin>> filled;
        cout<<"Enter the color: ";
        cin>> color;
        Square newSquare(side,color,filled);
        cout << newSquare.toString() << endl;
    }
    else
        cout<< "Invalid input";
}
