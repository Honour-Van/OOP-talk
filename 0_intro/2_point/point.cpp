#include <iostream>
#include <cmath>
#include "point.hpp"

Point::Point(double x, double y) : x(x), y(y) {}

double Point::distance(const Point &other) const
{
    double dx = other.x - x;
    double dy = other.y - y;
    return std::sqrt(dx * dx + dy * dy);
}

int main()
{
    Point p1(0.0, 0.0);
    Point p2(3.0, 4.0);

    double dist = p1.distance(p2);
    std::cout << "Distance: " << dist << std::endl;

    return 0;
}
