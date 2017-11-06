#include <iostream>
#include <cmath>

using fptr = double(double); //-std=c++11

double Trapezoid_Uniform(fptr func,const double a,const double b,const int n);

int main (void)
{
   std::cout<<Trapezoid_Uniform(sin,0,M_PI,100)<<std::endl;
   std::cout<<Trapezoid_Uniform(exp,0,1,100)<<std::endl;
   std::cout<<Trapezoid_Uniform(atan,0,1,100)<<std::endl;
   
  return 0;
}

double Trapezoid_Uniform(fptr func, const double a, const double b, const int n)
{
  double h = 0.0;
  double sum = 0.5*(func(b)-func(a));
  h = (b-a)/n;
  
  for(int i=0; i<n; ++i)
    {
      double x = a+i*h;
      sum+=func(x);
      //std::cout<<x<<"\t"<<sum<<std::endl;
    }
  return sum*h;
}

