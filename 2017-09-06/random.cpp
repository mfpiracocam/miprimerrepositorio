#include <iostream>
#include <random>//Directiva de preprocesador para incluir random

int main (void)
{
  int seed =10;//semilla para mantener los resultados iguales y detectar errores
  std::mt19937 gen(seed);
  std::weibull_distribution<>dis(1,2);//tipo de distribución

  for(int n=0; n<10001; n++)
    {
      std::cout<<dis(gen)<<"\n";
    }
  std::cout<<"\n";
  return 0;
}
