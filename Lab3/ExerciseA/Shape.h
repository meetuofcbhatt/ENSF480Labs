/*
* File Name: Shape.h
* Assignment: Lab 3 Exercise A
* Lab Section: B02
* Completed by: Tomas Kmet and Meet Bhett
* Submission Date: Oct 11, 2023
*/
#ifndef EXERCISEA_SHAPE_H
#define EXERCISEA_SHAPE_H

#include "Point.h"
#include <iostream>
using namespace std;

class Shape
{
public:
    Shape(double x, double y, const char* name); //creates a new shape origin
    const Point getOrigin() const; //returns a reference to an origin point.
    // Does not allow modifications to the x and y values
    const char* getName() const; //returns the name of the shape
    virtual void display(); //Prints on the screen the shape's name, x and y coordinates of origin in a format
    double distance(Shape& other); //calculates distance of two shape origins
    static double distance(Shape& the_shape, Shape& other); //calculates distance of two shape origins
    void move (double dx, double dy); //changes the position of the shape by x+dx and y+dy
    virtual ~Shape(); //shape destructor
protected:
    char* shapeName;
    Point origin;
};

#endif //EXERCISEA_SHAPE_H
