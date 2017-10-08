#include <iostream>

const int max = 2000;
int fibonacci(int a, int b , int max);
int main (void)
{
  int a = 0;
  int b = 1;
  int c = 0;
  c = fibonacci(a,b,max);
  std::cout<<c<<std::endl;  
  
  return 0;
}
int fibonacci(int a, int b, int max)
{
  int c = 0;
  c = a+b;
  std::cout<<c<<std::endl;
  if(c<=max)
    return(fibonacci(b,c,max));
  else
    return c; 
}
