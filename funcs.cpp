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

Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2){
  double lengthA=length(p1);
  double lengthB=length(p2);
  if(lengthA<lengthB){
    return p2;
  }
  else{
    return p1;
  }

}
