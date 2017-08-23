#include <iostream>
int main (void)
{
  int x=0;
  double sum =0.0;
  int NMAX=123;
    
  for(x=1; x<=NMAX;x++)
    {sum+=(1.0/x);
    }
  std::cout<< sum <<"\n";
  return 0;
}
