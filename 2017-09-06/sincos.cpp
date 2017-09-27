//FUNCIÓN QUE PASA POR VALOR, ES DECIR SOLO CAMBIA VALORES LOCALMENTE
#include <iostream>
#include <cmath>

double f(double a); //Declaración
//double sin (double x);
//double cos (double y);FAIL
int main (void)
{
  double a = M_PI/4.0;
  int b = f(a);
  std::cout<<b<<"\n";
  return 0;
}

double f(double a) //Definición o implementación
{
  return 2* std::sin(a)*std::cos(a); 			       
}
