#include <iostream>
int main(void)
  
{
  int a = 0, sum=0;
  std:: cin>>a;
  if (a>=0)
    {
      a = a -(2*a);
      while (a<=0);
      {
	sum += a;
	a  += 1;
      }
    }
  /*std::cout<<"Programa que suma enteros positivos hasta 100 \n";
  std::cout<<"Introduzca primer número ";
  std:: cin>>x;*/
 
      std::cout<< sum << "\n";
  return 0;
}
