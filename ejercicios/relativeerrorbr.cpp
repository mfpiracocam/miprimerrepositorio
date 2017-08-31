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
  double xr=0, xu=18 , xl=12;
  double xrr=0, xuu=18, xll=12;
  double rer=0, rerr=0;
  
  /* for (pasos = 0; pasos <= NMAX; pasos++)
     {*/
      while (pasos <= NMAX)
	{
      xr= 0.5*(xu+xl) ;//Promedio de valores extremos
      if (std::fabs(f(xr)) <= tol) break;
      if (f(xu)*f(xr)<0)
	{xl=xr ; } //Decidir si fprom por cada uno de los valores extremos es positivo o negativo
      
      else
	{xu=xr ; }
      //std::cout<<pasos<< "\t" << xl << "\t" << xu << "\t" << xr << "\t" << f(xr) << "\n";
      rer = std::fabs(((f(xr)-14.801)/14.801)*100) ;
      pasos++;
      std::cout<< pasos  << "\t" << rer << "\n";
	}
      for (pasos = 0; pasos <= NMAX; pasos++)
	{
	  xrr= xuu- (f(xuu)*(xll-xuu))/(f(xll)-f(xuu)) ;//Promedio de valores extremos
	  if (std::fabs(f(xrr)) <= tol) break;
	  if (f(xuu)*f(xrr)<0)
	    {xll=xrr ; } //Decidir si fprom por cada uno de los valores extremos es positivo o negativo
	  
	  else	 {xuu=xrr ; }
	  rerr = std::fabs(((f(xrr)-14.801)/14.801)*100) ;
	  std::cerr << pasos  << "\t" << rerr << "\n";
	  //std::cout<< pasos  << "\t" << xl << "\t" << xu << "\t" << xr << "\t" << f(xr) << "\n";
	}
      
      //pasos++;
      
      //std::cout<< pasos  << "\t" << rer << "\t" << rerr << "\n";
      //}
  
  
  return 0;
  
  //imprimir
}
