#include "functions.h"
#include <math.h>

double calcDist(double l1[], double l2[]) {
  double x = l1[0] - l2[0];
  double y = l1[1] - l2[1];
  auto dist = sqrt(pow(x, 2) + pow(y, 2));

  return dist;
}