//Programa que lee un numero e imprime si es divisible por tres
#include <iostream>
int main (void)
{
  int num=0;
  std::cout<<"Programa que permite conocer si un número es divisble por 3 "<< "\n" ;
  std::cout<<"Escriba el entero del que quiere conocer su divisibilidad: "; std::cin>>num; std::cout<< "\n";
  std::cout<<"El número "<<num;
  (num%3==0) ?  std::cout<<" es divisible" : std::cout<<" no es divisible";
  std::cout<<"\n";
  
  return 0;
}
