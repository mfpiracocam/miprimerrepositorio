//Programa que lee un numero e imprime si es divisible por tres
#include <iostream>
int main (void)
{int num=0;
  std::cout<<"Programa que permite conocer si un número es divisble por 3 "<< "\n" ;
  std::cout<<"Escriba el entero del que quiere conocer su divisibilidad: "; std::cin>>num; std::cout<< "\n";
    if (num%3==0){
      std::cout<<"El número "<<num<<" es divisible"<<"\n";
    }
      else{
	std::cout<<"El número "<<num<<" no es divisible"<<"\n";}
    return 0;
    }
