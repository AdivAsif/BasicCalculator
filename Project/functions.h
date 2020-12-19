#pragma once
#include <vector>
using namespace std;
/* calculator functions:
*   addition
*   subtraction
*   multiplication
*   division
*   euclidean distance
*   factorial
*/
double addition(double x, double y);                                // addition
double subtraction(double x, double y);                             // subtraction
double multiplication(double x, double y);                          // multiplication
double division(double x, double y);                                // division
double calcDist(double l1[], double l2[]);                          // euclidean distance
int factorial(int n);                                               // factorial
void quickSort(vector<int>& values, int start, int end);            // quicksort
void handler(int n);                                                // handler to manage all functions