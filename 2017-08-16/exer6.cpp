//Programa que ordena de mayor a menor 3 enteros
#include <iostream>
int main(void)
{
  int a=0, b=0,c=0;
  std::cout<<"Programa que ordena de mayor a menor 3 enteros"<<"\n";
  std::cout<<"Ingrese los números a ordenar: " << "\n";
  std::cin>> a >> b >> c;
  if (a>=b && b>=c) {std::cout<<a,b,c;}
  if (a>=c>=b) {std::cout<<a,c,b;}
  if (b>=a>=c) {std::cout<<b,a,c;}
  if (b>=c>=a) {std::cout<<b,c,a;}
  if (c>=a>=b) {std::cout<<c,a,b;}
  if (c>=b && b>=a) {std::cout<<c << "  " << b << "  " << a;}
  return 0;
}
