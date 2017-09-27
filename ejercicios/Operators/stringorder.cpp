#include <iostream>
#include <string>
int main(void)
{
  std::string aa, bb, cc ;
  std::cout<<"Programa que ordena alfabeticamente 3 palabras "<<"\n";
  std::cin>> aa >> bb >> cc;
 
  if (aa<bb && aa<cc)
    {
      std::cout<<aa<<",";
      if (bb<cc)
	{
	  std::cout<<bb<<","<<cc<<".";
	}
      else
	{
	  std::cout<<cc<<","<<bb<<".";
	}
    }
  else  if (bb<aa && bb<cc)
    {
     std::cout<<bb<<",";
     if (aa<cc)
       {
	 std::cout<<aa<<","<<cc<<".";
       }
     else
       {
	 std::cout<<cc<<","<<aa<<".";
       }
    }
  else
    {
      std::cout<<cc<<",";
      if (aa<bb)
      {
	std::cout<<aa<<","<<bb<<".";
      }
      else
	{
	  std::cout<<bb<<","<<aa<<".";
	}
      
    }
  std::cout<<"\n";
      
  /*if (a>=b && b>=c) {std::cout<<a,b,c;}
    if (a>=c>=b) {std::cout<<a,c,b;}
    if (b>=a>=c) {std::cout<<b,a,c;}
    if (b>=c>=a) {std::cout<<b,c,a;}
    if (c>=a>=b) {std::cout<<c,a,b;}
    if (c>=b && b>=a) {std::cout<<c << "  " << b << "  " << a;}*/
  
  std::cout<<"\n";
  return 0;
}
