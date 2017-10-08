#include <iostream>

int main (void)
{
  const long int N = 794900000;
  double *data;
  data = new double [N] {0};
  std::cout<<data[N/2]<<std::endl;
  
  delete[]data;
  return 0;
}
