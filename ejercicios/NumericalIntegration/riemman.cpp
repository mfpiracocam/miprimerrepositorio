#include <iostream>
#include <cmath>

double f(double x);//Función a integrar

int main (void)
{
  std::cout.precision(16);//Precisión del cout
  std::cout.setf(std::ios::scientific);
  
  const double a = 0.0, b = 1.0;//semillas
  const double tol = 1.0e-4;
  const double integer = 0.12403;//valor real de la integral
  const int NMAX = 1000000;
  double d = 0.0, x = 0.0;
  double  er = 0.0;
  int i=0, n = 1; //pasos máximos
  
  for (n=1; n<=NMAX; n++)
    {
      double area = 0.0;
      d=(b-a)/n; //calcular el delta
      
      for (i=1;i<=n; i++)
	{
	  x= a+(i*d);
	  area += f(x)*d; 
	}
      er = std::fabs(area-integer);
      std::cout<< n <<"\t"<< area <<"\n";
      if (er<tol) break;
      n =10*n;
    }
    
  // std::cout<< area <<"\n";
  
  return 0;
}

double f(double x)
{
  return (sin(x))*(sin(x))*(sin(x))*(sin(x));
}
