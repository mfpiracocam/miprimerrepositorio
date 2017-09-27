#include <iostream>
#include <fstream>//imprimir o leer archivos
#include <cmath>
#include <cstdio> //para usar printf

double f(double x);
double g(double x);
double forward_deriv(double x,double h);

int main (void)
{
  std::cout.precision(16); std::cout.setf(std::ios::scientific);
  std::ofstream fout; //o es para imprimir i es para leer
  fout.precision(16);fout.setf(std::ios::scientific);
  fout.open("sinderiv.txt");
  double h = 0, x = 0, dx = 0, d = 0;
  h = 0.0001;
  dx = 0.1;
  
  
  for (x = 0; x <=10; x+=dx)
    {
      d = forward_deriv(x,h);
      dexact=2*std::cos(2*x);
      //std::printf("%25.16e%25.16e\n", x, d)
      //std::cout<< x << " "<<d<<std::endl;
      fout<< x << " "<< d <<"\n";
    }
  return 0;
}
double f(double x)
{
  return sin (2*x);
}
double g (double x)
{
  return 2*std::cos(x);
}
double forward_deriv (double x, double h)
{
  return (f(x+h)-f(x))/h;
}
