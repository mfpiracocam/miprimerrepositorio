#include <iostream>
#include <string>
int main (void)
{
  string astring;
  astring = "ola k ase";
  std::cout<<"Programa que ordena alfabeticamente 3 palabras"<<"\n";
  std::cout<<"Ingrese las palabras a ordenar: " << "\n";
  std::cin>> a >> b >> c;
  int(a), int(b), int(c);
  if (a>b && a>c)
    {
      std::cout<<a<<",";
      if (b>c)
	{
	  std::cout<<b<<","<<c<<".";
	}
      else
	{
	  std::cout<<c<<","<<b<<".";
	}
    }
 else  if (b>a && b>c)
   {
     std::cout<<b<<",";
     if (a>c)
       {
	 std::cout<<a<<","<<c<<".";
       }
     else
       {
	 std::cout<<c<<","<<a<<".";
       }
   }
else
  {
    std::cout<<c<<",";
    if (a>b)
      {
	std::cout<<a<<","<<b<<".";
      }
    else
      {
	std::cout<<b<<","<<a<<".";
      }
    
  }
  std::cout<<"\n";
      
  /*if (a>=b && b>=c) {std::cout<<a,b,c;}
  if (a>=c>=b) {std::cout<<a,c,b;}
  if (b>=a>=c) {std::cout<<b,a,c;}
  if (b>=c>=a) {std::cout<<b,c,a;}
  if (c>=a>=b) {std::cout<<c,a,b;}
  if (c>=b && b>=a) {std::cout<<c << "  " << b << "  " << a;}*/
  
  return 0;
}
