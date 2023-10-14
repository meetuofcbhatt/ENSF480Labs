//
// Created by Meet Bhatt on 2023-10-11.
//File Name: CurveCut.h
//Assignment: Lab 03 Ex A
//Lab Section: B02
// Created by: Meet Bhatt and Tomas Kmet
//Submission: Oct 11, 2023
//


#ifndef EXERCISEA_CURVECUT_H
#define EXERCISEA_CURVECUT_H

#include "Circle.h"
#include "Rectangle.h"

class CurveCut: public Rectangle, public Circle
{
public:
    CurveCut(double x, double y, double side_a, double side_b, double radius, const char *name);
    //constructor that initializes its data members with given arguments
    CurveCut(const CurveCut& source);//copy constructor
    CurveCut& operator =(const CurveCut&S);//assignment operator

    double area();//calculate area
    double perimeter();//calculate perimeter

//    const double getSideA();
//    const double getSideB();
//    const double getRadius();

//    void setRadius(double rad);
//    void set_side_a(double side);
//    void set_side_b(double side);

    void display();


};
#endif //EXERCISEA_CURVECUT_H
