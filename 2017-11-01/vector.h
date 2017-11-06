#include <iostream>
#include <cmath>
//class Vector2D private use keyword public to change it
struct Vector2D //public use keyword private to change it
{
  double x {0.0}, y {0.0};

  double norm (void);
  double radangle (void);
  double degrees (void);
  Vector2D operator+(const Vector2D & v2);
  Vector2D operator-(const Vector2D & v2);
  Vector2D operator*(const Vector2D & v2);
};
