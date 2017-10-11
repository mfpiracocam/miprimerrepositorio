#include <iostream>
#include <array>
#include <cmath>

const int N = 10;

double mean(std::array<double,N> a);
int main (void)
{ 
  std::array<double, N> a {0.6,0.123,12.654645,9.7437,7.64365, 6.3252, 98.43, 0.943, 5.837, 1.0};
  double r = 0;
  double sr= 0;
  for (int ii = 0; ii<N ; ii++)
    {
      r = a[ii]-mean(a);
      sr += (r*r);
      std::cout<<r<<"\t"<<sr<<std::endl;
      
    }
  //sr
  //std::cout<<mean(a)<< std::endl;
  return 0;
}
double mean(std::array<double,N> a)
{
  double s = 0;
  double m = 0;
  for (int ii=0; ii<N; ii++)
    {
      s+=a[ii];
    }
  m=s/N;
  
  return m;
}
 /* imprimir matriz
     for(int ii=0; ii<N; ii++)
     {
     std::cout<<a[ii]<<"\t";
     }*/

/*Ciclo for para imprimir m multiples veces
     double s = 0;
     double m = 0;
  for (int ii=0; ii<N; ii++)
  {
  s+=a[ii];
  m= s/(ii+1);
  std::cout<<s<<"\t"<<m<<std::endl;
      }*/

