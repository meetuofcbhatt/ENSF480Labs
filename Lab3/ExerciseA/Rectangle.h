/*
* File Name: Rectangle.h
* Assignment: Lab 1 Exercise B
* Lab Section: B02
* Completed by: Tomas Kmet and Meet Bhett
* Submission Date: Oct 2, 2023
*/

#ifndef EXERCISEA_RECTANGLE_H
#define EXERCISEA_RECTANGLE_H

#include "Square.h"

class Rectangle: public Square{
public:
    Rectangle(double x, double y, double side_a, double side_b, const char *name);
    //constructor that initializes its data members with given arguments
    Rectangle(double x, double y, const char *name, const Rectangle &source); //copy constructor
    Rectangle& operator =(const Rectangle& S); //assignment operator
    double area(); //calculates area of shape
    double perimeter(); //calcualtes perimeter
    const double getSideA() const; //gets the side_a
    void set_side_a(double side); //sets sideA
    const double getSideB() const; //gets the side_a
    void set_side_b(double side); //sets sideB
    void display(); //displays the name, x and y coordinates of origin, side lengths, perimeter, and area, in a format
private:
    double side_a;
    double side_b;
};


#endif //EXERCISEA_RECTANGLE_H
