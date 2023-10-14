//
// Created by Meet Bhatt on 2023-10-10.
//File Name: Circle.cpp
//Assignment: Lab 03 Ex A
//Lab Section: B02
//Created by: Meet Bhatt and Tomas Kmet
//Submission: Oct 11, 2023
//

#include "Circle.h"
#include "Shape.h"
#include "Point.h"
#include <string.h>
using namespace std;
#include <math.h>

#define PI 3.14159265358979323846;
Circle::Circle(double x, double y, double radius, const char*name): Shape(x, y, name), radius(radius){}
Circle::Circle(const Circle& source): Shape(source.getOrigin().getx(), source.getOrigin().gety(), source.getName()), radius(source.getRadius()){}
Circle& Circle::operator=(const Circle &S){
    if(this == &S)
        return *this;
    delete[] this->shapeName;
    this->shapeName = new char[strlen(S.getName()) + 1];
    strcpy(this->shapeName, S.getName());
    return *this;
}
double Circle::area()
{
    double ans = 3.14159265358979323846 * radius * radius;
    return ans;
}

double Circle::perimeter()
{
    double ans = 2 * 3.14159265358979323846 * radius;
    return ans;
}

const double Circle::getRadius() const {
    return this->radius;
}

void Circle::setRadius(double rad) {
    this->radius = rad;
}

void Circle::display() {
    cout << "Circle Name: " << this->getName() << endl;
    cout << "X-Coordinate: " << this->getOrigin().getx() << endl;
    cout << "Y-Coordinate: " << this->getOrigin().gety() << endl;
    cout << "Radius: " << this->getRadius() << endl;
    cout << "Area: " << this->area() << endl;
    cout << "Perimeter: " << this->perimeter() << endl;
}