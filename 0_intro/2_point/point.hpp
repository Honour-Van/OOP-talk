#include <iostream>
#include <cmath>

class Point
{
public:
  Point(double x, double y);

  double distance(const Point &other) const;

private:
  double x;
  double y;
};
