#include <iostream>

int main(void)
{
  long x=9;
  for (int ii=8;ii>1;ii--)
    {
      x*=ii;
      std::cout<<x<<std::endl;
    }
  return 0;
}
