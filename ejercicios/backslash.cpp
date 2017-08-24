#include <iostream>
int main (void)
{
  //Los siguientes comandos imprimen espacios
  std::cout<< "a\tb\vc\n";
  //Estos todavia no se que hacen
  std::cout<< "aaaaa\rbbbbb\bccccc\n";
  //Este se supone que manda bun beep pero pos no pasa
  std::cout<< "\a\n";
  //Los siguientes comandos imprimen lo que esta después de backslash
  std::cout<< "\'" << "\"" << "\?" << "\\" << "\n";

  return 0;
}
