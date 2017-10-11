#include <iostream>
#include <array>

const int N = 10;

//double fillarray (std::array<double, N> &a);
double keyboardfill (std::array<double, N> &a);
void printarray (std::array<double, N> &a);
int main (void)
{
  std::array<double, N> a={0};
  //fillarray(a);
  keyboardfill(a);
  printarray(a);
  std::cout<<"\n";
}
void printarray (std::array<double, N> &a)
{
 for(int ii=0; ii<N; ii++)
     {
     std::cout<<a[ii]<<"\t";
     }
}
double keyboardfill (std::array<double, N> &a)
{
 double n = 0;
  for (int ii=0; ii<N ; ii++)
    {
      std::cin>>n;
      a[ii]= n;
    } 
}
/*double fillarray (std::array<double, N> &a)
{
  int f = 0;
  for (int ii = 0; ii < N; ii++)
    {
     a[ii]= a[ii]+1;
    }
  return f;
  }*/
