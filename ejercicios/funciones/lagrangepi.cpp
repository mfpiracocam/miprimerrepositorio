#include <iostream>
#include <cmath>

const int Max = 100;
const int Min = 2;
  
int primo (int ii);
double lagrange_pi(int Max);
int main (void)
{
  int a=0;
  for (int ii=Min; ii<Max; ii++)
    {
      if (primo(ii)==0)continue;
      else
	{
	  a+=1;
	} 
    }
   std::cout<<a<<"\n";
   std::cout<<lagrange_pi(Max)<<"\n";
  
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
double lagrange_pi(int x)
{
  int a=0;
  a= (x/((std::log(x))-1.08366));
  return a;
}
