#include <iostream>
int main(void)
{
  int aa;
  //std::cin>>aa;
  //std::cout<<"\n";
  for (aa = 0; aa <= 256 ; ++aa) {
    std::cout<< aa << "\t" << char(aa) <<"\n";
  }
  return 0;
}
  
