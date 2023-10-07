/*
* File Name: Point.cpp
* Assignment: Lab 3 Exercise A
* Lab Section: B02
* Completed by: Tomas Kmet and Meet Bhatt
* Submission Date: Oct 11, 2023
*/

#include <stdio.h>
#include<iostream>
#include "Point.h"
#include "math.h"
using namespace std;

int Point::count = 0; //initialize the static variable.

Point::Point(double xcoor, double ycoor)
{
    x = xcoor;
    y = ycoor;
    count++;//count is static in Point
    pointID = 1000 + count;
}

void Point::display()
{
    cout << "X-coordinate: " << x << endl;
    cout << "Y-coordinate: " << y << endl;
}

int Point::counter() const
{
    return count;
}

const double Point::getx() const
{
    return x;
}

const double Point::gety() const
{
    return y;
}

void Point::setx(double xcoor)
{
    x = xcoor;
}

void Point::sety(double ycoor)
{
    y = ycoor;
}

double Point::distance(const Point &n) const
{
    double diffx = abs(x - n.getx());
    double diffy = abs(y - n.gety());
    double ans = (diffx * diffx) + (diffy * diffy);

    return sqrt(ans);

}

double Point::distance(const Point& m, const Point& n)
{
    double diffx = abs(m.getx() - n.getx());
    double diffy = abs(m.gety() - n.gety());
    double ans = (diffx * diffx) + (diffy * diffy);

    return sqrt(ans);
}

