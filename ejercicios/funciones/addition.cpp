#include <iostream>

int addition (int a, int b);
int main (void)
{
  int a = 5;
  int b = 3;
  int c = 0;
  c = addition(a,b);
  std::cout<<"The result is "<< c <<"\n";
  //std::cout<<&a<<"\t"<<&b<<"\n"; prints memory address
  
  return 0;
}

int addition (int a, int b)
{
  int r = 0;
  r = a+b;
  //std::cout<<&a<<"\t"<<&b<<"\n"; prints memory address
  return r;
}
