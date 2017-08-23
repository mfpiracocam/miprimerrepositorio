#include <iostream>
int main (void)
{
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  int x=0;
  double sum =0.0;
  int NMAX=123;
    
  for(x=1; x<=NMAX;x++)
    {sum+=(1.0/x);
      std::cout<< x<< "\t"<< sum <<"\n";
    }

  return 0;
}
