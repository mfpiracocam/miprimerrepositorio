#include <iostream>
int main (void)
{
  std::string aa;
  std::cin>> aa;
  std::cout<<"\n";
  
  if(aa=="zero")
    {std::cout<<0<<"\n";}
  else if (aa=="one")
    {std::cout<<1<<"\n";}
  else if (aa=="two")
    {std::cout<<2<<"\n";}
  else if (aa=="three")
    {std::cout<<3<<"\n";}
  else if (aa=="four")
    {std::cout<<4<<"\n";}
  else if (aa=="five")
    {std::cout<<5<<"\n";}
  else if (aa=="six")
    {std::cout<<6<<"\n";}
  else if (aa=="seven")
    {std::cout<<7<<"\n";}
  else if (aa=="eight")
    {std::cout<<8<<"\n";}
  else  if (aa =="nine")
    {std::cout<<9<<"\n";}
  else
    {std::cout<< "not a number i know"<<"\n";}
  
  return 0;
}
