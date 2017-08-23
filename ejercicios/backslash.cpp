#include <iostream>
int main (void)
{
  //Los siguientes comandos imprimen espacios
  std::cout<< "\t" << "\v" << "\n";
  //Estos todavia no se que hacen
  std::cout<< "\r" << "\b";
  //Este se supone que manda un beep pero pos no pasa
  std::cout<< "\a"
  //Los siguientes comandos imprimen lo que esta después de backslash
  std::cout<< "\'" << "\"" << "\?" << "\\";

  return 0;
}
