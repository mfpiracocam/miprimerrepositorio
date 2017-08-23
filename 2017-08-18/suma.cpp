#include <iostream>
int main(void)
  
{
  int sum = 0, ii = 2;
  /*std::cout<<"Programa que suma enteros positivos hasta 100 \n";
    std::cout<<"Introduzca primer número ";
    std:: cin>>x;*/
  while (ii<=100)
  {
    sum += ii;
    ii +=2;
  }
  std::cout<< sum << "\n";
  return 0;
}
