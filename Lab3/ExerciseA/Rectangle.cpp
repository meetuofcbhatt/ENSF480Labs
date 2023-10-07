/*
* File Name: Rectangle.cpp
* Assignment: Lab 1 Exercise B
* Lab Section: B02
* Completed by: Tomas Kmet and Meet Bhett
* Submission Date: Oct 2, 2023
*/
#include "Rectangle.h"
#include "Square.h"
#include "Point.h"
#include "Shape.h"
#include <string.h>
using namespace std;

Rectangle::Rectangle(double x, double y, double side_a, double side_b, const char *name) : Shape(x, y, name), Square(x, y, side_a, name), side_b(side_b) {}


Rectangle::Rectangle(double x, double y, const char *name, const Rectangle &source) : Shape(x, y, name),
                                                                                      Square(source.getOrigin().getx(),
                                                                                             source.getOrigin().gety(),
                                                                                             source.getSideA(),
                                                                                             source.getName()),
                                                                                      side_b(getSideB()) {}
Rectangle& Rectangle::operator =(const Rectangle &S) {
    if(this == &S)
        return *this;
    delete[] this->shapeName;
    this->shapeName = new char[strlen(S.getName())+1];
    strcpy(this->shapeName, S.getName());
    return *this;
}

double Rectangle::area(){
    return side_a*side_b;
}

double Rectangle::perimeter() {
    return 2*side_a+2*side_b;
}

const double Rectangle::getSideA() const {
    return side_a;
}

const double Rectangle::getSideB() const {
    return side_b;
}

void Rectangle::set_side_a(double side) {
    side_a = side;
}

void Rectangle::set_side_b(double side) {
    side_b = side;
}

void Rectangle::display(){
    cout << "Square Name: " << this->getName() << endl;
    cout << "X-Coordinate: " << this->getOrigin().getx() << endl;
    cout << "Y-Coordinate: " << this->getOrigin().gety() << endl;
    cout << "Side a: " << this->getSideA() << endl;
    cout << "Side b: " << this->getSideB() << endl;
    cout << "Area: " << area() << endl;
    cout << "Perimeter: " << perimeter() << endl;
}
