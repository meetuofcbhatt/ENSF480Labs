/*
* File Name: Square.h
* Assignment: Lab 3 Exercise A
* Lab Section: B02
* Completed by: Tomas Kmet and Meet Bhett
* Submission Date: Oct 11, 2023
*/

#ifndef EXERCISEA_SQUARE_H
#define EXERCISEA_SQUARE_H

#include "Shape.h"

class Square: public virtual Shape{
public:
    Square(double x, double y, double side, const char* name);
    //constructor that initializes its data members with given arguments
    Square(const Square& source); //copy constructor
    Square& operator =(const Square& S); //assignment operator
    virtual double area(); //calculates area of shape
    virtual double perimeter(); //calculates perimeter
    const double getSideA() const; //gets the side_a
    void setSideA(double side);
    void display(); //displays the name, x and y coordinates of origin, side lengths, perimeter, and area, in a format
private:
    double side_a;
};

#endif //EXERCISEA_SQUARE_H
