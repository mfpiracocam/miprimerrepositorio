#include <iostream>
int main (void)
{
  int a = 0, b = 0;
  std::cin>>a;
  std::cin>>b;
  if (a>b)
    {
      std::cout<< a <<" is the larger number \n";
    }
  else
    {
      std::cout<< b <<" is the larger number \n";
    }
  std::cout<<"sum "<< a+b<<"\n";
  std::cout<<"difference "<< a-b<<"\n";
  std::cout<<"product "<< a*b<<"\n";
  /*(double)a;
  (double)b;
  std::cout<<"ratio "<< a/b<<"\n";*/
  
  
  return 0;
}
