#include <iostream>

//int integerPower(int base, int exponent);
int main (void)
{
  int base =2;
  int exponent = 3;
  for(int e = 1; e<=exponent; e++)
    {
      int a = base;
      // int b = 1;
      a *=base;
      //b =h a*base;
     
      std::cout<<a<<"\n";
      
    }
  return 0;
}
/*int integerPower(int base, int exponent)
{
  a = base;
  b = a*base;
  if ()
  else
    return 
    }*/
