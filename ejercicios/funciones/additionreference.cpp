#include <iostream>

int addition (int & a, int b);
int main (void)
{
  int x = 5;
  int y = 3;
  int z = 0;
  z = addition(x,y);
  std::cout<<"The result is "<< z <<"\n";
  std::cout<<"The value of x is "<< x <<"\n";
  //std::cout<<&x<<"\t"<<&y<<"\n"; prints memory address
  
  return 0;
}

int addition (int & a, int b)
{
  int r = 0;
  r = a+b;
  a = r;//esta linea no tiene uso en la versión value pero aqui cambia el valor de x
  // std::cout<<&a<<"\t"<<&b<<"\n"; prints memory address
  return r;
}
