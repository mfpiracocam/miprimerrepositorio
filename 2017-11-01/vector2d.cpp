#include <iostream>
#include <cmath>
#include "vector2d.h" 
//functions to Vector
Vector2D Vector2D::operator+(const Vector2D & v2)
{
  Vector2D c;
  c.x = x+ v2.x;
  c.y = y+ v2.y;

  return c;
}
Vector2D Vector2D::operator-(const Vector2D & v2)
{
  Vector2D c;
  c.x = x- v2.x;
  c.y = y- v2.y;

  return c;
}

/*Vector2D operator*(const Vector2D & v2)
{
  double sum = 0.0;
  sum = x*v2.x
  }*/
double Vector2D::norm (void)
{
  return std::sqrt(x*x+y*y);
}
double Vector2D::radangle (void)
{
  return std::atan2(y, x);
}
/*double Vector2D::degrees (void)
{
  double angle;
  angle = Vector2D::radangle;
  return angle*130/M_PI;
}*/
