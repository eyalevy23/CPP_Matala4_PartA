#include "Point.hpp"
#include <cmath>
#include <iostream>

using namespace std;
namespace ariel
{
    Point::Point(double x_axis, double y_axis) : x_axis(x_axis), y_axis(y_axis)
    {
    }

    double Point::getX()
    {
        return this->x_axis;
    }

    double Point::getY()
    {
        return this->y_axis;
    }

    double Point::distance(Point other)
    {
        return sqrt(pow(this->x_axis - other.x_axis, 2) + pow(this->y_axis - other.y_axis, 2));
    }

    void Point::print()
    {
        cout << "(" << this->x_axis << ", " << this->y_axis << ")" << endl;
    }

    Point Point::moveTowards(Point orign, Point destenation, double distance)
    {
        // double dx = destenation.x - orign.x;
        // double dy = destenation.y - orign.y;
        // double length = sqrt(dx * dx + dy * dy);
        // double x = orign.x + dx / length * distance;
        // double y = orign.y + dy / length * distance;
        // return Point(x, y);
        return Point(0,0);
    }

}
