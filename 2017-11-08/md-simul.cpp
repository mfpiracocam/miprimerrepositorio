#include "particle.h"
#include "md-simul.h"
#include <iostream>

const double g =-9.81;
const int ti = 1000;
const double DT =0.01;
const double K = 253.47;

void initial_conditions(sphere & body)
{
  body.Y = 1.6598;
  body.Vx = 0.23698;

  body.rad =
}
void compute_force(sphere & body)
{
  body.Fx = body.Fy = body.Fz = 0.0;

  body.Fy+= body.mass*g;//caida

  double delta = body.rad - body.Y;
  if (delta > 0)
    {
      body.Y +=k*delta;//piso
      body.Y -=1.9876*body.Vy;//Perder energia
    }
}
void start_integration(sphere & body, const double &dt)
{
  body.Vx -=
}

void time_integration(sphere & body, const double &dt)
{
  //lepfrof
  //condiciones de arranque, desfasar 
  body.Vx+=body.Fx*dt/(body.mass);
  body.Vy+=body.Fy*dt/(body.mass);
  body.Vz+=body.Fz*dt/(body.mass);
  body.X +=body.Vx*dt;
  body.Y +=body.Vy*dt;
  body.Z +=body.Vz*dt;
  
}
void print(sphere & body)
{
  std:: cout <<time<<"\t"
             <<body.X<<"\t"
	     <<body.Y<<"\t"
	     <<body.Z<<"\t"
	     <<body.Vx<<"\t"
	     <<body.Vy<<"\t"
	     <<body.Vz<<"\t"
	     <<"\n";
}
