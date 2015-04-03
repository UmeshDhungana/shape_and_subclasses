#include <iostream>
#include "Rectangle.h"
#include <sstream>

using namespace std;

Rectangle::Rectangle()
{
    setWidth(1.0);
    setLength(1.0);
}

Rectangle::Rectangle(double sWidth, double sLength)
{
    setWidth(sWidth);
    setLength(sLength);
}

Rectangle::Rectangle(double sWidth, double sLength, string sColor, bool sFilled)
    :Shape(sColor,sFilled)
{
    setWidth(sWidth);
    setLength(sLength);
}

void Rectangle::setWidth(double sWidth)
{
    width = sWidth;
}

void Rectangle::setLength(double sLength)
{
    length = sLength;
}

double Rectangle::getWidth()
{
    return width;
}

double Rectangle::getLength()
{
    return length;
}

double Rectangle::getArea()
{
    return (length*width);
}

double Rectangle::getPerimeter()
{
    return (2*(length+width));
}

string Rectangle::toString()
{
    stringstream length, width;
    width << getWidth();
    length << getLength();
    return "A rectangle with width = "  + width.str() + " and length = " + length.str() + ", which is a subclass of " + Shape::toString() ;
}

