#include <iostream>
template <class T>
T f (T a)
{
  return 2*a;
}
//int f (int a);v.2
//double g (double a);v.1
//double f (double a);v.2
int main (void)
{
  int a =9;
  std::cout <<"f(a)= "<< f(a) << std::endl;
  double b = -7.51;
  // std::cout <<"g(b)= "<< g(b) << std::endl; v.1
   std::cout <<"f(b)= "<< f(b) << std::endl;
  return 0;
}

/*int f (int a) v.2 
{
  return 2*a;
}

//double g (double a) v.1
double f (double a)
{
  return 2*a;
  }*/

  

