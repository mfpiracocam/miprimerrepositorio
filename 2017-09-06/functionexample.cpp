// & Pasar por referencia cambia en todo el programa, no importa si cambia el nombre porque es local
#include <iostream>
#include <cmath>

int f(int & b); //Declaración

int main (void)
{
  int a =9;
  std::cout<<"a inside main" << a<<"\n";
  std::cout<<"a& inside main "<<&a<<"\n";
 
  int b = f(a);
  std::cout<<b<<"\n";
  return 0;
}

int f(int & b) //Definición o implementación
{
  b=-9;
  std::cout<<"b inside f" << b<<"\n";
  std::cout<<"b & inside f "<<&b<<"\n";
  return 2*b; 			       
}
