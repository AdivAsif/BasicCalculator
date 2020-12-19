#include "functions.h"

int factorial(int n) {
  if (n != 1)
    return(n * factorial(n - 1));
  else if (n >= 70)
    return 0;
  else return 1;
}