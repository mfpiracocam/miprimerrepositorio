#include <iostream>
int main (void)
{
  int edad=0;
  std::cout<< "How old are you?";
  std::cin>> edad;
  if (edad>= 18)
    {
      std::cout<< "Here, have a beer"<<"\n";
     }
  return 0;
}
