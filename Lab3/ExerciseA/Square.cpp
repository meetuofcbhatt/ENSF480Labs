/*
* File Name: Square.cpp
* Assignment: Lab 1 Exercise B
* Lab Section: B02
* Completed by: Tomas Kmet and Meet Bhett
* Submission Date: Oct 2, 2023
*/
#include "Square.h"
#include "Shape.h"
#include "Point.h"
#include <string.h>
using namespace std;

Square::Square(double x, double y, double side, const char* name): Shape(x, y, name), side_a(side){}

Square::Square(const Square& source): Shape(source.getOrigin().getx(), source.getOrigin().gety(), source.getName()), side_a(source.getSideA()){}
Square& Square::operator =(const Square &S) {
    if(this == &S)
        return *this;
    delete[] this->shapeName;
    this->shapeName = new char[strlen(S.getName())+1];
    strcpy(this->shapeName, S.getName());
    return *this;
}
double Square::area(){
    return side_a*side_a;
}

double Square::perimeter() {
    return 4*side_a;
}

const double Square::getSideA() const {
    return side_a;
}

void Square::setSideA(double side) {
    side_a = side;
}

void Square::display(){
    cout << "Square Name: " << this->getName() << endl;
    cout << "X-Coordinate: " << this->getOrigin().getx() << endl;
    cout << "Y-Coordinate: " << this->getOrigin().gety() << endl;
    cout << "Side a: " << this->getSideA() << endl;
    cout << "Area: " << area() << endl;
    cout << "Perimeter: " << perimeter() << endl;
}
