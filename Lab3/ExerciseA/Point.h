/*
* File Name: Point.h
* Assignment: Lab 1 Exercise B
* Lab Section: B02
* Completed by: Tomas Kmet and Meet Bhett
* Submission Date: Oct 2, 2023
*/
#ifndef EXERCISEA_POINT_H
#define EXERCISEA_POINT_H

class Point{
public:
    static int count; //incomplete type??
    Point(double xcoor, double ycoor);
    //REQUIRES: x-coordinate and y-coordinate to initialize the Point object.

    void display();
    //REQUIRES:
    //PROMISES: to display the x and y coordinate of the Point object in a certain format.

    const double getx() const;
    //REQUIRES:
    //PROMISES: returns the x-coordinate of the Point object.

    const double gety() const;
    //REQUIRES:
    //PROMISES: returns the y-coordinate of the Point object.

    void setx(double xcoor);
    //REQUIRES: new value of the x-coordinate.
    //PROMISES: sets the x-coordinate of the Point object.

    void sety(double ycoor);
    //REQUIRES: new value of the y-coordinate.
    //PROMISES: sets the y-coordinate of the Point object.

    int counter() const;
    //REQUIRES:
    //PROMISES:returns the number of objects of class Point at any time.

    double distance(const Point& n) const;
    //REQUIRES: Another Point object.
    //PROMISES: the distance from this Point to the Point that is given in the parameter.

    static double distance(const Point& m, const Point& n);
    //REQUIRES: two Point objects to calculate the distance between them.
    //PROMISES: calculate the distance between the two Points provided.

private:
    double x;
    double y;
    int pointID;

};

#endif //EXERCISEA_POINT_H
