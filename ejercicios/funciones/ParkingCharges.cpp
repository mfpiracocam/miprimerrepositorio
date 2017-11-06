#include <iostream>
#include <cmath>

double calculateCharges(double time);
int main(void)
{
  double time1 = 1.5;
  double time2 = 4.0;
  double time3 = 24.0;
  std::cout<<"Car"<<"\t"<<"Hours\t"<< "Charge" <<"\n";
  std::cout<<1<<"\t"<<time1<<"\t"<<calculateCharges(time1)<<"\n";
  std::cout<<2<<"\t"<<time2<<"\t"<<calculateCharges(time2)<<"\n";
  std::cout<<3<<"\t"<<time3<<"\t"<<calculateCharges(time3)<<"\n";
   
  
  return 0;
}
double calculateCharges(double time)
{
  int c = 0;
  c = 2.00+(ceil(time)*0.5);
  if (time<24.0 && time>3.0)
    return c;
  else if (time< 3.0)
    return 2.00;
  else
    return 10.00;
}

