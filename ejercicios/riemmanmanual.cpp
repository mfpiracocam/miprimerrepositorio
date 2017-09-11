#include <iostream>
#include <cmath>

double f(double x);//Función a integrar

int main (void)
{
  std::cout.precision(16);//Precisión del cout
  std::cout.setf(std::ios::scientific);
  
  const double a = 0.0;//semillas
  const double b = 1.0;
  // const double integer = 0.12403;//valor real de la integral
  const int n = 100;
  double d = 0.0, x = 0.0;
  double area = 0.0;
  int i=0; //pasos máximos

   d=(b-a)/n; //calculo el delta
  
  for (i=1;i<=n; i++)//tomo un n cambiar n
    {
      x= a+(i*d);
      area += f(x)*d; //areav= f(x)*delta
      std::cout<< i<<"\t"<< area <<"\n";
    }
  
  std::cout<< area <<"\n";
  
  return 0;
}

double f(double x)
{
  return (sin(x))*(sin(x))*(sin(x))*(sin(x));
}
