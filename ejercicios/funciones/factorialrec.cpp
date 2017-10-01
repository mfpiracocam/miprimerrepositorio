#include <iostream>

int factorial (int a);
int main (void)
{
  int x = 9;
  std::cout<<x<< "!="<< factorial(x)<<"\n";
  
  return 0;
}
int factorial (int a)
{
  if (a>1)
    return (a*factorial(a-1));
  else
    return 1;
}
