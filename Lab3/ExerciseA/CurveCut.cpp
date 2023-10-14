//
// Created by Meet Bhatt on 2023-10-11.
//File Name: CurveCut.cpp
//Assignment: Lab 03 Ex A
//Lab Section: B02
//Created by: Meet Bhatt and Tomas Kmet
//Submission: Oct 11, 2023
//

#include "CurveCut.h"
#include <string.h>
#include <iostream>
CurveCut::CurveCut(double x, double y, double side_a, double side_b, double radius, const char *name):Shape(x,y,name),
                                                                                                      Rectangle(x,y,side_a,side_b,name),
                                                                                                      Circle(x,y,radius,name) {
    if(radius > side_a || radius > side_b)
    {
        cout << "Error: The cut radius is too large" << endl;
        exit(1);
    }
}

CurveCut::CurveCut(const CurveCut &S): Shape(S.getOrigin().getx(),S.getOrigin().gety(),S.getName()),Rectangle(S.getOrigin().getx(),S.getOrigin().gety(),S.getSideA(),S.getSideB(),S.getName()),
                                       Circle(S.getOrigin().getx(),S.getOrigin().gety(),S.getRadius(),S.getName()){
    if(S.getRadius() > S.getSideA() || S.getRadius() > S.getSideB())
    {
        cout << "Error: The cut radius is too large" << endl;
        exit(1);
    }
}


CurveCut& CurveCut::operator=(const CurveCut &S) {
    if(S.getRadius() > S.getSideA() || S.getRadius() > S.getSideB())
    {
        cout << "Error: The cut radius is too large" << endl;
        exit(1);
    }
    if(this == &S)
        return *this;
    delete[] this->shapeName;
    this->shapeName = new char[strlen(S.getName()) + 1];
    strcpy(this->shapeName, S.getName());

    //now copy the radius, side_a, and side_b
    this->setRadius(S.getRadius());
    this->set_side_a(S.getSideA());
    this->set_side_b(S.getSideB());
    return *this;
}

//const double CurveCut::getRadius() {return this->getRadius();}
//const double CurveCut::getSideA() {return this->getSideA();}
//const double CurveCut::getSideB() {return this->getSideB();}

//void CurveCut::setRadius(double rad) {this->setRadius(rad);}
//void CurveCut::set_side_a(double side) {this->set_side_a(side);}
//void CurveCut::set_side_b(double side) {this->set_side_b(side);}

void CurveCut::display() {
    cout << "CurveCut Name: " << this->getName() << endl;
    cout << "X-Coordinate: " << this->getOrigin().getx() << endl;
    cout << "Y-Coordinate: " << this->getOrigin().gety() << endl;
    cout << "Side a: " << this->getSideA() << endl;
    cout << "Side b: " << this->getSideB() << endl;
    cout << "Radius of the cut: " << this->getRadius() << endl;

}
