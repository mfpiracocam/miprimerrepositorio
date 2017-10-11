#include <iostream>
#include <random>
#include <vector>
int dicesum(int seed1, int seed2);
int main (void)
{
  int seed1 = 10;
  int seed2 = 3;

  dicesum(seed1,seed2);
  
}
int dicesum(int seed1, int seed2)
{  
  std::mt19937 gen(seed1);
  std::uniform_int_distribution<>dicea(1,6);
  std::mt19937 gene(seed2);
  std::uniform_int_distribution<>diceb(1,6);
  

  for(int n=0; n<=36000; n++)
    {
      int sum = 0;
      sum=dicea(gen)+diceb(gene);
      std::cout<<sum<<"\n"; 
    }
  // std::cout<<"\n";
  return 0;
}
