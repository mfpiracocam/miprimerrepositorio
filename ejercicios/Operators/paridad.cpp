#include <iostream>
int main (void)
{
  int x=0;
  std::cout<<"Ingrese el número del cual quiere saber la paridad"<<"\n";
  std::cin >> x;
  if (x%2 == 0)
    std::cout<< x << " Es par" << "\n";
  else
    std::cout<< x << " Es impar" << "\n";
  return 0;
}
