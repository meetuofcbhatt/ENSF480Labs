/*
* File Name: Shape.cpp
* Assignment: Lab 1 Exercise B
* Lab Section: B02
* Completed by: Tomas Kmet and Meet Bhett
* Submission Date: Oct 2, 2023
*/
#include "Shape.h"
#include "Point.h"
#include <string.h>
using namespace std;

Shape::Shape(double x, double y, const char* name):origin(double (x), double (y)){
    shapeName = new char[strlen(name) + 1];
    strcpy(shapeName, name);
}

const Point& Shape::getOrigin() const {
    return origin;
}

const char* Shape::getName() const {
    return shapeName;
}

double Shape::distance(Shape &other) {
    return this->origin.distance(other.origin);
}

double Shape::distance(Shape& the_shape, Shape& other){
    Point::distance(the_shape.getOrigin(), other.getOrigin());
}

void Shape::move(double dx, double dy){
    origin.setx(origin.getx() + dx);
    origin.sety(origin.gety() + dy);
}

void Shape::display(){
    cout << "Shape Name: " << getName() << endl;
    this->origin.display();
}

Shape::~Shape(){
    delete []shapeName;
}

