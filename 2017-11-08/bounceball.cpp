#include <iostream>
#include <cmath>
#include <>

int main(void)
{
  Sphere ball;
  initial_conditions(ball);
  compute_force(ball);
  start_integration(ball,DT);
  print(ball);

  for (int ti = 0; ti<TF; ++ti)
    {
      time_integration(ball, DT);
      compute_force(ball);
      print(ball,ti*de);
    }
  
  return 0;
}
