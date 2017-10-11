#include <iostream>
#include <array>
#include <cmath>

const int N = 10;

double standardDeviation(std::array<double,N> a);
double mean(std::array<double,N> a);
int main (void)
{ 
  std::array<double, N> a {0.6,0.123,12.654645,9.7437,7.64365, 6.3252, 98.43, 0.943, 5.837, 1.0};
  
  std::cout<< standardDeviation(a) << std::endl;
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
double standardDeviation(std::array<double,N> a)
{
  double r = 0;
  double sr= 0;
  for (int ii = 0; ii<N ; ii++)
    {
      r = a[ii]-mean(a);
      sr += (r*r);
    }
  double sd = 0;
  double c = 0;
  c = 1.0/(N-1);
  sd = sqrt(c)*sqrt(sr);
  
  return sd;
}#include <iostream>
#include <array>
#include <cmath>

const int N = 10;

double standardDeviation(std::array<double,N> a);
double mean(std::array<double,N> a);
int main (void)
{ 
  std::array<double, N> a {0.6,0.123,12.654645,9.7437,7.64365, 6.3252, 98.43, 0.943, 5.837, 1.0};
  
  std::cout<< standardDeviation(a) << std::endl;
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
double standardDeviation(std::array<double,N> a)
{
  double r = 0;
  double sr= 0;
  for (int ii = 0; ii<N ; ii++)
    {
      r = a[ii]-mean(a);
      sr += (r*r);
    }
  double sd = 0;
  double c = 0;
  c = 1.0/(N-1);
  sd = sqrt(c)*sqrt(sr);
  
  return sd;
}
