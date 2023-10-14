//
// Created by Meet Bhatt on 2023-10-10.
//File Name: Circle.h
//Assignment: Lab 03 Ex A
//Lab Section: B02
//Created by: Meet Bhatt and Tomas Kmet
//Submission: Oct 11, 2023
//

#ifndef EXERCISEA_CIRCLE_H
#define EXERCISEA_CIRCLE_H

#include "Shape.h"

class Circle: public virtual Shape{
public:
    Circle(double x, double y, double radius, const char* name);
    //constructor that initializes its data members with given arguments
    Circle(const Circle& source);//copy ctor
    Circle& operator =(const Circle& S);//assignment operator
    virtual double area();//calculate area of shape//not virtual
    virtual double perimeter();//calculate perimeter//not virtual
    const double getRadius() const;//gets the radius of Circle
    void setRadius(double rad);
    void display();//displays the name, x and y coordinates of origin, Radius, perimeter, and area, in a format
private:
    double radius;
};

#endif //EXERCISEA_CIRCLE_H
