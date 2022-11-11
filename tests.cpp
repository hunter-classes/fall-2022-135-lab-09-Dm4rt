#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include "doctest.h"
#include "funcs.h"
#include "coord3d.h"

// add your tests here
TEST_CASE("length"){
  Coord3D pointP = {10, 20, 30};
  CHECK(length(&pointP)-37.4165738677 <0.000001);
  Coord3D pointD = {25, 5, 15};
  CHECK(length(&pointD)-29.5803989155 <0.000001);
}

TEST_CASE("Farther"){
  Coord3D pointP = {10, 20, 30};
  Coord3D pointQ = {-20, 21, -22};
  CHECK(fartherFromOrigin(&pointP, &pointQ)==&pointP);

  Coord3D pointD = {12, -5, 12};
  Coord3D pointM = {-20, 40, -4};
  CHECK(fartherFromOrigin(&pointD, &pointM)==&pointM);
}

TEST_CASE("Move"){
  Coord3D pos = {0, 0, 100.0};
  Coord3D vel = {1, -5, 0.2};
  move(&pos, &vel, 2.0);
  CHECK(pos.x==2);
  CHECK(pos.y==(-10));
  CHECK(pos.z==100.4);
}

TEST_CASE("Create and Delete"){
  Coord3D *correct = new Coord3D{1, 2, 3};
  Coord3D *created = createCoord3D(1,2,3);
  
  CHECK(created->x==correct->x);
  delete created;
CHECK(!(created->x==correct->x));
}
