#include "particle.h"

const double g =-9.81;
const int ti = 1000;
const double DT =0.01;
const double K = 253.57;

void initial_conditions(sphere & body);
void compute_force(sphere & body);
void start_integration(sphere & body, const double &dt);
void time_integration(sphere & body);
void print(sphere & body, double time);
