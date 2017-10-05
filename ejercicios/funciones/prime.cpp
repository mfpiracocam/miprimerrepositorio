#include <iostream>
#include <cmath>

const int Max = 100;
const int Min = 2;
  
int primo (int ii);
int main (void)
{
  for (int ii=Min; ii<Max; ii++)
    {
      if (primo(ii)==0)continue;
      else
	{
	  std::cout<<ii<<"\n";
	} 
    }
  
  return 0;
}

int primo (int ii)
{
  int r = 1;
  for (int a=2; a<=(std::floor(std::sqrt(ii))) && a!=ii; a++)
    {
      r = (ii%a);
      if (r==0) break;
    }
  if (r==0)
    return 0;
  else
    return 1;
}
/*int primo (int ii)
{
  int r = 0;
  // for (int a=2; a<=(Max/2) && a!=ii; a++)
  for (int a=2; a<=(std::floor(std::sqrt(ii))) && a!=ii; a++)
    {
      r = (ii%a);
      if (r==0) break;
    }
  if (r==0)
    return 0;
  else
    return 1;
    }*/
