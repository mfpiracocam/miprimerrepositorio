#include <iostream>
#include <vector>

int main(void)
{
  long int N = 0;
  std::cin>>N;
  std::vector <double> data;
  data.resize(N);
  std::cout<<data[N/2]<<"\n";
  return 0;
}
