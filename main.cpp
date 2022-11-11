#include <iostream>
#include "coord3d.h"
#include "funcs.h"

int main()
{
  //TASK A
  Coord3D pointP = {10, 20, 30};
  std::cout<<length(&pointP) << std::endl;

  //TASK B
  Coord3D pointQ = {-20, 21, -22};
  std::cout << "Address of P: " << &pointP << std::endl;
  std::cout << "Address of Q: " << &pointQ << std::endl << std::endl;

  Coord3D * ans = fartherFromOrigin(&pointP, &pointQ);
   
  std::cout << "ans = " << ans << std::endl; // So which point is farther?

  //TASK C
  Coord3D pos = {0, 0, 100.0};
  Coord3D vel = {1, -5, 0.2};

  move(&pos, &vel, 2.0); // object pos gets changed
  std::cout << pos.x << " " << pos.y << " " << pos.z << std::endl;
  // prints: 2 -10 100.4

  //TASK E
  double x, y, z;
  x=10;
  y=20;
  z=30;
  Coord3D *ppos = createCoord3D(x,y,z);
  x=5.5;
  y=(-1.4);
  z=7.77;
  Coord3D *pvel = createCoord3D(x,y,z);

  move(ppos, pvel, 10.0);

  std::cout << "Coordinates after 10 seconds: "
  << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << std::endl;

  deleteCoord3D(ppos); // release memory
  deleteCoord3D(pvel);

  return 0;
}
