#include <iostream>

//int fibonacci(int max);
int main (void)
{
  int max = 14;
  for (int a=1; a<max;)
    {
      a+=a;
      std::cout<<a<<"\n";
    }
  return 0;
}
/*int fibonacci(int max)
{
  if()
    return(a+fibonacci(a));
  else
    return 
}*/
