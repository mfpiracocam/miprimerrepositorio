#include <iostream>
#include <cmath>
double f (double x)//Definir función a evaluar
  
{
  return ((9.81*68.1)/x)*(1-exp(-(x/68.1)*10))-40 ;
}

int main (void)
{
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  
  const  double tol=1.0e-6;
  int NMAX=100, pasos=0;
  double xr=0;
  double xu=18;
  double xl=12;  //Definir intervalo inicial
  
  while (pasos <= NMAX)
    {
      xr= 0.5*(xu+xl) ;//Promedio de valores extremos
      if (std::fabs(f(xr)) <= tol) break;
      if (f(xu)*f(xr)<0)
	{xl=xr ; } //Decidir si fprom por cada uno de los valores extremos es positivo o negativo
      
      else
	{xu=xr ; }
      std::cout<<pasos<< "\t" << xl << "\t" << xu << "\t" << xr << "\t" << f(xr) << "\n";
      pasos++;
    }
  std::cout<< f(xr)<< "\n";
//imprimir
}
