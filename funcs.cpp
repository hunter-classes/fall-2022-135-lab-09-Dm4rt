#include <iostream>
#include <cmath>
#include "funcs.h"
#include "coord3d.h"

// add functions here

double length(Coord3D *p){
  double dist;
  dist+=pow(p->x,2);
  dist+=pow(p->y,2);
  dist+=pow(p->z,2);
  dist = sqrt(dist);
  return dist;
}
