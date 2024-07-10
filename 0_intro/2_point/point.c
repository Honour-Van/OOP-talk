// gcc code/point.c -o point -lm && ./point

#include "point.h"

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Point
{
  double x, y;
};

struct Point *makePoint(double x, double y)
{
  struct Point *p = (struct Point *)malloc(sizeof(struct Point));
  p->x = x;
  p->y = y;
  return p;
}

double distance(struct Point *p1, struct Point *p2)
{
  double dx = p2->x - p1->x;
  double dy = p2->y - p1->y;
  return sqrt(dx * dx + dy * dy);
}

int main()
{
  struct Point *p1 = makePoint(0.0, 0.0);
  struct Point *p2 = makePoint(3.0, 4.0);

  double dist = distance(p1, p2);
  printf("Distance: %f\n", dist);

  free(p1);
  free(p2);

  return 0;
}
