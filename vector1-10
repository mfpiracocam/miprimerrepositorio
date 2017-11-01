#include <iostream>
#include <cmath>
#include "vector2d.h"

//Compilar g++ -std=c++11


void print(const Vector2D & v);
int main (void)
{
  Vector2D a, b, c;

  a.x = 2.0; a.y =-5.7;
  b.x = 3.2; b.y = 1.7;
  c = a + b;//c = a.operator+(b);

  /*std::cout<<"a_x = "<<a.x<<std::endl;
  std::cout<<"a_y = "<<a.y<<std::endl;
  std::cout<<"|a| = "<<a.norm()<<std::endl;
  std::cout<<"rad = "<<a.radangle()<<std::endl;
  std::cout<<"degrees = "<<a.radangle()<<std::endl;*/

  print(a);
  print(b);
  print(c);

  return 0;
}
//print vector
void print(const Vector2D & v)
{
  std::cout<<"("<<v.x<<","<<v.y<<")"<<std::endl;
}
