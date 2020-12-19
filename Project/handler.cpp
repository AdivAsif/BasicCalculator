#include "functions.h"
#include <iostream>
using namespace std;

double read(istream& is) {
  double x;
  is >> x;
  if (!x) {
    printf("The point cannot be null. \n");
    cin.clear();
    return 0;
  }
  return x;
}

void print(ostream& os, double x) {
  os << x << "\n";
}

void handler(int n) {
  if (n == 1) {
    cout << "Input First Number: " << endl;
    auto x = read(cin);
    cout << "Input Second Number: " << endl;
    auto y = read(cin);

    cout << "Addition between numbers: (" << x << ") and (" << y << ") = " << endl;
    print(cout, addition(x, y));
  }
  else if (n == 2) {
    cout << "Input First Number: " << endl;
    auto x = read(cin);
    cout << "Input Second Number: " << endl;
    auto y = read(cin);

    cout << "Subtraction between numbers: (" << x << ") and (" << y << ") = " << endl;
    print(cout, subtraction(x, y));
  }
  else if (n == 3) {
    cout << "Input First Number: " << endl;
    auto x = read(cin);
    cout << "Input Second Number: " << endl;
    auto y = read(cin);

    cout << "Multiplication between numbers: (" << x << ") and (" << y << ") = " << endl;
    print(cout, multiplication(x, y));
  }
  else if (n == 4) {
    cout << "Input First Number: " << endl;
    auto x = read(cin);
    cout << "Input Second Number: " << endl;
    auto y = read(cin);

    cout << "Division between numbers: (" << x << ") and (" << y << ") = " << endl;
    print(cout, division(x, y));
  }
  else if (n == 5) {
    double l1[2], l2[2];
    double dist;
    cout << "Input X1: " << endl;
    l1[0] = read(cin);
    cout << "Input Y1: " << endl;
    l1[1] = read(cin);
    cout << "Input X2: " << endl;
    l2[0] = read(cin);
    cout << "Input Y2: " << endl;
    l2[1] = read(cin);

    dist = calcDist(l1, l2);
    cout << "Euclidean distance between points: (" << l1[0] << ", " << l1[1] << ") and (" << l2[0] << ", " << l2[1] << ") = " << endl;
    print(cout, dist);
  }
  else if (n == 6) {
    cout << "Input Number: " << endl;
    auto x = read(cin);

    cout << "Factorial of: (" << x << ") = " << endl;
    print(cout, factorial(x));
  }
}