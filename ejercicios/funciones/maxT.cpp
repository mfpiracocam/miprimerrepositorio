#include <iostream>

template <class T>
T getMax (T a, T b, T c)
{
  if (a>b && a>c)
    {
      std::cout<<a<<",";
      if (b>c)
	{
	  std::cout<<b<<","<<c<<","<<std::endl;
	}
      else
	{
	 std::cout<<c<<","<<b<<","<<std::endl; 
	}
    }
  else if(b>a && b>c)
    {
      std::cout<<b<<",";
      if (a>c)
	{
	  std::cout<<a<<","<<c<<","<<std::endl;
	}
      else
	{
	 std::cout<<c<<","<<a<<","<<std::endl; 
	}
    }
  else
    {
      std::cout<<c<<",";
       if (a>b)
	{
	  std::cout<<a<<","<<b<<","<<std::endl;
	}
      else
	{
	 std::cout<<b<<","<<a<<","<<std::endl; 
	}
    }
}
int main (void)
{
  int a=5, b=9,c=34;
  double d=9.87, e=3.45 , f=0.43455;
  getMax(a,b,c);
  getMax (d,e,f);
  return 0;
}
